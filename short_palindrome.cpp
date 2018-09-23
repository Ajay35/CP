#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    long count=0;
    for(int i=0;i<=n-4;i++)
        for(int j=i+1;j<=n-3;j++)
            for(int k=j+1;k<=n-2;k++)
                for(int l=k+1;l<=n-1;l++)
                    if(str[i]==str[l] && str[j]==str[k])
                        count++;
    cout<<count<<endl;
    return 0;
}