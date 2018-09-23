#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,c=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int i=0;
	while(i<n)
	{
		if(arr[i]!=0)
			break;	
		i++;
	}
	int k=i;
	while(k<n)
	{
	   if(k<n-1 && arr[k]==0 && arr[k+1]==0)
		{
			while(arr[k]==0)
				k++;
		}
		else if(k<n-1) 
		{
			c++;
			k++;
		}
		else
		{
			if(arr[k]==1)	
			{
				c++;
			}
			k++;
		}

	}
	cout<<c<<endl;
}
