#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() 
{
    ll n,q,l,r;
    cin>>n>>q;
    ll arr[n],pref[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pref[0]=arr[0];
     for(int i=1;i<n;i++)
    {
        pref[i]=(pref[i-1])+(arr[i]);
    }
    while(q--)
    {
        cin>>l>>r;
        if(l==0)
            cout<<pref[r]<<endl;
        else
            cout<<(pref[r])-(pref[l-1])<<endl;
    }
    return 0;
}

