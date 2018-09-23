#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,k,temp=0,sum=0,count=0;
	cin>>n>>k;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	for(ll i=0;i<n;i++)
	{
		if(arr[i]>=8 && i<n)
		{
			sum+=8;
			arr[i+1]+=(arr[i]-8);
			count++;
			if(sum>=k)
			   break;
		}
		else if(arr[i]<8 && i<n)
		{
			sum+=arr[i];
			count++;
			if(sum>=k)
			   break;
		}
		else if(i==n-1 && arr[i]>=8)
		{
			sum+=8;
		}
		else
		{
			sum+=arr[i];
		}
	}
	if(sum>=k)
		cout<<count<<endl;
	else 
		cout<<-1<<endl;
	return 0;
}
