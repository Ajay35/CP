#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
	ull n,k;
	cin>>n>>k;
	if(k>n)
	{
		if(2*n<=k)
		{
			cout<<0<<endl;
		}
		else
		{
			ull i=(k-n)/2;
			if(k%2==0)
				cout<<(ull)(ceil((double)n/2)-i)<<endl;
			else
				cout<<(ull)(ceil((double)n/2)-i)<<endl;
		}
	}
	else if(n>=k)
	{
		if(k==2)
		{
			cout<<0<<endl;
		}
		else if(k%2==0)
		{
			cout<<k/2-1<<endl;
		}
		else
			cout<<k/2<<endl;
	}
	return 0;
}
