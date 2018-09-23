#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,sum=0,i,j;
	scanf("%lld",&n);
	sum+=n;
	i=2,j=n-2;
	while(j>=1)
	{
		sum+=((i*j)+1);
		i++;j--;
	}
	if(n!=1)
		cout<<sum+1<<endl;
	else
		cout<<1<<endl;
	return 0;
}	
