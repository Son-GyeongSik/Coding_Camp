#include <iostream>
#include <algorithm>
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