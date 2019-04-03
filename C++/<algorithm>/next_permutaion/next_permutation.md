# std::next_permutation

## 순열이란?

  순열이란

## next_permutation 사용법

next_permutation(BidirectionalIterator first, BidirectionalIterator last)  
next_permutation은 C++ reference에 위와 같이 나타나있다.

### C++ (array 활용)

```C++
#include <iostream>
using namespace std;
int N;
int ar[1100];
int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];
    if(next_permutation(ar,ar+N))
    {
        for(int x=0; x<N; x++)
        {
            cout<<ar[x]<<" ";
        }
    }
    else
    {
        cout<<-1;
    }
}
```

### C++ (vector 활용)

```C++
#include <iostream>
#include <algorithm>
using namespace std;
int N,A;
vector <int> V;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>A;
        V.push_back(A);
    }

    if(next_permutation(V.begin(),V.end()))
    {
        for(auto iter=V.begin(); iter!=V.end(); iter++)
        {
            cout<<*iter<<" ";
        }
    }
    else
    {
        cout<<-1;
    }
}
```

## 활용 문제 (in BOJ)