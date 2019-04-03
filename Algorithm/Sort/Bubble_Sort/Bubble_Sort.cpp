#include <iostream>
using namespace std;
void bubble_sort(int ar[],int N)
{
    int i,j,tmp;
    for(i=0; i<N; i++)
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