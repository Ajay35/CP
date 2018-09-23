#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,w,e=0,pile;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		e+=arr[i];
	}
	map<int,int> storage;
	int k=1;
		for(int i=0;i<n;i++)
		{	
			for(int j=1;j<=arr[i];j++)
			{
				storage.insert(pair<int,int>(k,i+1));
				k++;
			}
		}

	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&w);
		
		cout<<storage.find(w)->second<<endl;
	}
	return 0;
}
