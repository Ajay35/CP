#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool found=false;
	int n,c,maxn=INT_MIN,max_index;
	cin>>n>>c;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	int j=1;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[j])
		{
			//cout<<arr[i]<<" "<<arr[j]<<endl;
			maxn<(arr[i]-arr[j])?maxn=arr[i]-arr[j]:maxn;
			//cout<<"max"<<maxn<<endl;
			found=true;
		}
		j++;
	}
	if(found)
	{
		if((maxn-c)>0)
		{
			cout<<maxn-c<<endl;
		}
		else
		{ 
			cout<<0<<endl;
		}
	}
	else 
		cout<<0<<endl;
	return 0;
}
