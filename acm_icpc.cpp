#include<bits/stdc++>
using namespace std;
int main()
{
	int n,m,min=INT_MAX,max=INT_MIN;
	cin>>n>>m;
	string str[n];
	for(int i=0;i<n;i++)
		cin>>str[i];

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int c=0;
			for(int k=0;k<m;k++)
			{
				if(str[i]!='0' && str[j]!='0')
				{
					c++;
				}
			}
			(c>max)?max=c:max=max;
			(c<min)?min=c:min=min;
		}
	}
	cout<<max<<endl;
	cout<<min<<endl;
	return 0;
}
