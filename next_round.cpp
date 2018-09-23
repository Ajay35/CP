#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	
	int i,tmp=arr[k-1];
	for(i=k-1;i<n;)
	{
		if(arr[i]==tmp)
			i++;
		else
			break;
	}
	i--;
	//cout<<"i "<<i<<endl;
	int j,c=0;
	for(j=i;j>=0;j--)
	{
		if(arr[j]!=0)
			c++;
	}
	cout<<c<<endl;
	return 0;
}