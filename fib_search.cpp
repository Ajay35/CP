#include<bits/stdc++.h>
#define fo(i,n) for(int i=0;i<n;i++)
using namespace std;
int fib_search(int arr[],int k,int s,int n)
{
	int i=0,j=1;
	if(arr[s]==k) return s;
	else if(arr[s]>k) return -1;

	while(j+s<n)
	{
		if(arr[j+s]==k)
			 return j+s;
		else if(arr[j+s]>k)
			 return fib_search(arr,k,i+s,j+s);
		else 
		{
			int temp=i;
			i=j;
			j=j+temp;
		}
	}
	return -1;	
}
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<fib_search(arr,k,0,n)<<endl;
}
