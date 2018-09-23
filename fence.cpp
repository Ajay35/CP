#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,k,mi,sum=0,minn=INT_MAX,i,j;
	cin>>n;
	ll arr[n];	
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<=n-k;i++)
	{
		for(j=i;j<k;j++)
		{
			sum+arr[j];
		}
		if(sum<minn)
		{
			minn=sum;
			mi=j;
		}
		sum=0;
	}
	cout<<mi+1<<endl;
	return 0;
}

