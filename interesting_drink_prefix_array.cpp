#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	std::sort(arr,arr+n);
	cin>>q;
	while(q--)
	{
		cin>>x;
		if(arr[0]>x)
			cout<<0<<endl;
		else if(arr[n-1]<=x)
			cout<<n<<endl;
		else
			cout<<std::upper_bound(arr,arr+n,x)-arr<<endl;
	}
	return 0;
}
