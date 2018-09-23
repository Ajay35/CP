#include<bits/stdc++.h>
#define ll long long 
#define MOD 1000000007
using namespace std;
int main()
{
	ll x,y,n,i=3,temp;
	cin>>x>>y;
	cin>>n;
	ll arr[6];
	arr[0]=x;arr[1]=y;
	
	for(ll i=1;i<=4;i++)
	{
		arr[i+1]=arr[i]-arr[i-1];		
		(arr[i+1]<0)?arr[i+1]+=MOD:arr[i+1]%=MOD;
		cout<<i+1<<" "<<arr[i+1]<<endl;
	}

	if(arr[n%6-1]<0)
		cout<<arr[n%6-1]+MOD<<endl;
	else
		cout<<arr[n%6-1]%MOD<<endl;
	return 0;
}
