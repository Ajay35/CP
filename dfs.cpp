#include<bits/stdc++.h>
using namespace std;
void dfs(int v,vector<bool>& visited,vector<vector<int>> adj)
{
	visited[v]=true;
	cout<<v<<endl;
	for(int u:adj[v])
	{
		if(!visited[u])
		{
			dfs(u,visited,adj);
		}
	}
}
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	vector<vector<int>> adj(n);
	vector<bool> visited(n,false);  
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		adj[a].push_back(b);
	}
	int x;
	cin>>x;
	visited[x]=true;
	dfs(0,visited,adj);
	return 0;
}
