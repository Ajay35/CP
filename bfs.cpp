#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,x,y;
	cin>>n>>p;
	int s;
	vector<vector<int>> adj(n);
	vector<int> d(n),used(n,false),parent(n);
	queue<int> que;	
	for(int i=0;i<p;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);		
	}
	que.push(0);
	used[0]=true;
	while(!que.empty())
	{

		int u=que.front();
		que.pop();
		cout<<u<<" ";

		for(int v:adj[u])
		{
			cout<<"in for loop"<<endl;
			if(!used[v])
			{
				used[v]=true;
				que.push(v);
				d[v]=d[u]+1;
				parent[v]=u;

				cout<<parent[v]<<endl;
			}
		}
	}
	cout<<"out of while"<<endl;
	if(!used[0])
	{
		cout<<"No path contains this vertex"<<endl;
	}
	else
	{
		vector<int> path;	
		for(int i=0;i!=-1;i=parent[i])
		{
			cout<<"i"<<i<<endl;
			path.push_back(i);
		}
		reverse(path.begin(),path.end());

		for(int i=0;i<path.size();i++)
				cout<<path[i]<<" ";
	}
	return 0;
}
