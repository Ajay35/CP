#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll mat[2][2]={{1,1},{1,0}},id[2][2]={{1,0},{0,1}};
        ll n;
        cin>>n;
        while(n>0)
        {
             if(n%2!=0)
            {
                ll res[2][2]={{0,0},{0,0}};
                for(int i=0;i<2;i++) 
                {
                    for(int j=0;j<2;j++)
                    { 
                        for(int k=0;k<2;k++)
                        {
                            res[i][j]+=(id[i][k]*mat[k][j])%MOD;
                        }
                    }
                }
                for(int i=0;i<2;i++) 
                {
                    for(int j=0;j<2;j++)
                    {
                         id[i][j]=res[i][j]%MOD;
                    }
                }
            }
            ll res[2][2]={{0,0},{0,0}};
            for(int i=0;i<2;i++)
            {
                 for(int j=0;j<2;j++)
                 {
                     for(int k=0;k<2;k++)
                     {
                        res[i][j]+=(mat[i][k]*mat[k][j])%MOD;
                     }
                 }
            }
            for(int i=0;i<2;i++)
            { 
                for(int j=0;j<2;j++)
                {    
                    mat[i][j]=res[i][j]%MOD;
                }
            }
            n/=2;
        }
        cout<<id[0][1]<<endl;
    }
    return 0;
}
