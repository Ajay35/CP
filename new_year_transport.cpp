#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t;
	bool flag=false;
	cin>>n>>t;
	int portals[n-1];
	for(int i=0;i<n-1;i++)
		cin>>portals[i];
	int i=1;	
	while(i<=n)
	{
		if(i==t)
		{
			flag=true;
			break;
		}
		else if(i>t)
			break;
		i+=portals[i-1];
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
