#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>m;
	int lines[m][2];
	for(int i=0;i<m;i++)
		cin>>lines[i][0]>>lines[i][1];

	for(int i=0;i<m;i++)
	{
		int li=lines[i][0]-1;
		//cout<<"line is: "<<li+1<<endl;
		if(li>0)
		{
			int up=lines[i][1]-1;
			arr[li-1]+=up;
			//cout<<"up:"<<up<<endl;
			//cout<<li<<" "<<arr[li-1]<<endl;
		}
		if(li<n-1)
		{
			int down=arr[li]-lines[i][1];
			arr[li+1]+=down;
			//cout<<"down:"<<down<<endl;
			//cout<<li+2<<" "<<arr[li+1]<<endl;
		}
		arr[li]=0;
		//cout<<li+1<<" "<<arr[li]<<endl;
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}
