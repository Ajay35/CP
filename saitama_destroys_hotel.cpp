#include<bits/stdc++.h>
using namespace std;
int compare(const void *aa,const void *bb)
{
	int *a=(int *)aa;
	int *b=(int *)bb;
	if(a[0]>b[0])
		return -1;
	else if(a[0]<b[0])
		return 1;

}
int main()
{	
	int n,s,t=0;
	cin>>n>>s;
	int arr[n][2];	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];	
	}
	qsort(arr,n,sizeof(arr[0]),compare);
	
	/*cout<<"arr"<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<arr[i][0]<<" "<<arr[i][1]<<endl;	
	}*/
	for(int i=0;i<n;i++)
	{
		int tmp;
		tmp=s-arr[i][0];
		//cout<<"tmp:"<<tmp<<endl;
		s=arr[i][0];
		//cout<<"floor:"<<s<<endl;
		t+=tmp;
		//cout<<"time:"<<t<<endl;
		if(t<arr[i][1])
		{
			t+=(arr[i][1]-t);
			//cout<<"inc"<<endl;		
		}			
	}
	
	cout<<t+arr[n-1][0]<<endl;
	return 0;
}
