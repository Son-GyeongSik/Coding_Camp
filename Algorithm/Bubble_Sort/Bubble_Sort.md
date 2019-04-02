# Bubble Sort(버블 소트)

## 버블 소트란?

    Bubble Sort는 모든 인접한 원소쌍의 대소를 비교해나가면서 원소들을 정렬하는 방법입니다.  
    모든 인접한 원소쌍을 다 비교하다보니 정렬 알고리즘 중에서는 느린 축에 속하는 알고리즘입니다.  
    Bubble Sort라고 이름이 지어진 이유는 정렬하는 과정에서  
    두 원소들이 바뀌는 과정이 수면에서 거품이 생기는 모습과 비슷해서 입니다.

## 관련 동영상
  
이미지를 클릭해주세요  
  
[![Video Label](http://img.youtube.com/vi/ebI54DXYQG8/0.jpg)](https://youtu.be/ebI54DXYQG8?t=52)

## 구현 방법

    버블 소트의 구현 방법은 간단합니다.
    N개의 숫자들이 일렬로 나열되어 있고 오름차순으로 정렬하려 합니다.  
    만약에 인접한 두 원소 중에 앞에 있는 원소가 뒤에 있는 원소보다 크다면 바꾸어주는 과정을  
    모든 원소가 오름차순으로 정렬될 때까지 실행해 주면 됩니다.

## 구현 코드

### C++

```C++
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int ar[],int N)
{
    int i,j,tmp;
    for(i=0; i<N-1; i++)
    {
        for(j=0; j<N-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                tmp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int N; //정렬할 숫자의 개수
    int arr[1100]; // N개의 숫자를 입력받을 배열
    cin>>N;
    for(int x = 0; x<N; x++) cin >> arr[x];
    bubble_sort(arr , N);

    for(int x = 0; x<N; x++) cout<<arr[x]<<" ";
}
```

### Python

```python
N = int(input())
arr = list(map(int,input().split(" ")))

for i in range(N-1):
    for j in range(N-i-1):
        if arr[j]>arr[j+1]:
            tmp=arr[j]
            arr[j]=arr[j+1]
            arr[j+1]=tmp

for i in arr:
    print(i,end=" ")
```