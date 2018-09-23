#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,sweets=INT_MIN;
	bool can_buy=false;
	cin>>n>>s;
	int arr[n][2];
	for(int i=0;i<n;i++)
		cin>>arr[i][0]>>arr[i][1];
	
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]>s)
			continue;
		else
		{
			if(s==arr[i][0] && arr[i][1]!=0)
					continue;
			else if(arr[i][1]==0 && arr[i][0]<=s) 
			{
				(sweets<0)?sweets=0:sweets;
				can_buy=true;
			} 	
			else
			{
				(sweets<(100-arr[i][1]))?sweets=100-arr[i][1]:sweets; 
				can_buy=true;
			}			
		}
	}
	if(can_buy)
		cout<<sweets<<endl;
	else 
		cout<<-1<<endl;
	return 0;
}
