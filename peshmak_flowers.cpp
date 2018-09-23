#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll getOccurence(ll arr[],ll n,ll x)
{
	ll c=0;
	for(int i=0;i<n;i++)
		if(arr[i]==x)
			c++;
	return c;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,ways=0,diff,minn=INT_MAX,maxx=INT_MIN;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(maxx<arr[i]) maxx=arr[i];
		if(minn>arr[i]) minn=arr[i];
	}

	if(minn==maxx)
	{
		cout<<0<<" "<<(n*(n-1))/2<<endl;
	}
	else
	{
		ll x=getOccurence(arr,n,maxx);
		ll y=getOccurence(arr,n,minn);
		cout<<maxx-minn<<" "<<x*y<<endl;
	}
	
	
	return 0;
}
