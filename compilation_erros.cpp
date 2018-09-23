#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,x,sum1=0,sum2=0,sum3=0;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		sum1+=x;
	}
	for(ll i=0;i<n-1;i++)
	{
		cin>>x;
		sum2+=x;
	}
	cout<<sum1-sum2<<endl;
	for(ll i=0;i<n-2;i++)
	{
		cin>>x;
		sum3+=x;
	}
	cout<<sum2-sum3<<endl;
	return 0;
}
