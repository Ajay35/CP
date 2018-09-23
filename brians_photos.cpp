#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	char c;
	bool f=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c;
			if(c!='G' && c!='W' && c!='B')
			{
				f=true;
			}
		}
	}
	(f==true)?cout<<"#Color"<<endl:cout<<"#Black&White"<<endl;
	return 0;
}
