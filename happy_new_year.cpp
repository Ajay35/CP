#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,problems=0;
    cin>>n>>k;
    int time_having=240-k;
    for(int i=1;i<=n;i++)
    {
        time_having-=(i*5);
        if(time_having<0)
            break;
        else
            problems++;
    }
    cout<<problems<<endl;
    return 0;
}
