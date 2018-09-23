#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
	bool edge=false;
    cin>>n>>l;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	sort(arr,arr+n);
	double max=abs(0-arr[0]);
	edge=true;
	for(int i=0;i<n-1;i++)
	{
		if(max<((double)abs(arr[i]-arr[i+1])/2))
		{
			max=(double)abs(arr[i]-arr[i+1])/2;
			edge=false;
		}
	}

	if(max<abs(arr[n-1]-l))
	{
		max=abs(arr[n-1]-l);
		edge=true;
	}
	if(edge)
	{
		cout<<fixed;
		cout<<setprecision(10);
		cout<<(double)max<<endl;
	}
	else
	{
		cout<<fixed;
		cout<<setprecision(10);
		cout<<(double)max<<endl;		
	}
    return 0;
}
