#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bool flag=true;
	int n,m;
	cin>>n>>m;
	int bulbs[m]={0},steps[n][100];
	for(int i=0;i<n;i++)
	{
		cin>>steps[i][0];
		for(int j=1;j<=steps[i][0];j++)
		{
			cin>>steps[i][j];
			bulbs[steps[i][j]-1]=1;
		}
	}
	for(int i=0;i<m;i++)
	{
		if(bulbs[i]!=1)
		{
			flag=false;
			break;
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
