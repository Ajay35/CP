#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cnt=0;
	cin>>n;
	char arr[n][n],c='C';
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=c;
			(c=='C')?cnt++:cnt;
			if(j==n-1 && n%2==0)
			{
				(c=='C')?c='C':c='.';	
			}
			else
			{
				(c=='C')?c='.':c='C';	
			}			
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}
