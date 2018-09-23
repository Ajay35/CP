#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,v,k,c=0;
	bool f;
	set<int> sellers;
	cin>>n>>v;
	
	for(int i=0;i<n;i++)
	{
		    f=false;
			cin>>k;
			ll arr[k];
			for(int j=0;j<k;j++)
			{
				cin>>arr[j];	
				if(arr[j]<v)
					f=true;
			}
			if(f)
			{
				sellers.insert(i+1);
				c++;
			}
	}
	if(c!=0)
	{
		cout<<c<<endl;
		for(set<int>::iterator i=sellers.begin();i!=sellers.end();i++)
			cout<<*i<<" ";
		cout<<endl;
	}
	else
	 	cout<<0<<endl;

}
