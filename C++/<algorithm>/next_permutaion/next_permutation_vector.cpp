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