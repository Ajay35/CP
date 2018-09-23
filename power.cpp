#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
ull fast_pow(int n,int p)
{
    ull res=1;
    while(p>0)
    {
        if (p&1)
            res=res*n;
        n=n*n;
        p>>=1;
    }
    return res;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<fast_pow(n,p)<<endl;
    return 0;
}