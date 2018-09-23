#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t,c,x,cnt=0,ways=0;
	cin>>n>>t>>c;
	for(ll i=0;i<n;i++)
	{
		cin>>x;
		if(x<=t)
		{
			cnt++;
			if(cnt==c)
			{
				ways++;
				cnt--;
			}
		}
		else
			cnt=0;
	}
	cout<<ways<<endl;
	return 0;
}
