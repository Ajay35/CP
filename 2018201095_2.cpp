#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll c=0;
        cin>>n;
        while(n>0)
        {
            n=n&(n-1);
            n=n>>1;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}

