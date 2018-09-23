#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,x;
	set<ll,greater<int>> pending,notFound;
	cin>>n;
	ll i=n;
	while(i>0)
	{
		cin>>x;
		if(x!=i)
		{
			pending.insert(x);
			notFound.insert(x);
			cout<<endl;
		}
		else
		{
			if(*notFound.begin()!=x)
			{
				pending.insert(x);
				notFound.insert(x);
				cout<<endl;
			}
			else
			{
				cout<<x<<" ";
				while(!notFound.empty() && *notFound.begin()==*pending.begin())
				{				
					cout<<*pending.begin()<<" ";
					pending.erase(pending.begin());
					notFound.erase(notFound.begin());
				}
				cout<<endl;
			}
		}
		i--;
	}
	return 0;
}
