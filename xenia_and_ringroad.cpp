#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m,t=0;
	cin>>n>>m;
	ll task[m],pos=0;
	for(ll i=0;i<m;i++)
	{
		cin>>task[i];
		--task[i];
		if(pos<=task[i])
		{
			t+=task[i]-pos;
			pos=task[i];
			//cout<<"pos:"<<pos+1<<endl;
			//cout<<"time:"<<t<<endl;
		}
		else if(pos>task[i])
		{
			t+=((n-pos)+task[i]);		
			pos=task[i];
			//cout<<"pos:"<<pos+1<<endl;
		//	cout<<"time"<<t<<endl;
		}
	}
	cout<<t<<endl;
	return 0;
}
