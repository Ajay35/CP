#include<bits/stdc++.h>
using namespace std;
class Graph
{
		int v;
		list<int> *adj;
	public:
		Graph(int V);
		void DFSUtil(int v,bool visited[],int cats_on_route[],int*,int,int);
		void addEdge(int,int);
};
Graph::Graph(int V)
{
	v=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int a,int b)
{
	adj[a].push_back(b);
	adj[b].push_back(a);
}
void Graph::DFSUtil(int u,bool visited[],int cats_on_route[],int *ans,int cnt,int max_cats)
{
	//cout<<"in dfsutil with "<<u<<endl;
	visited[u]=true;

	
		/*	list<int>::iterator it;
		for(it=adj[u].begin();it!=adj[u].end();it++)
		{
			cout<<*it<<" ";
		}*/
	

	if(cats_on_route[u]==1)
	{
		cnt++;
	//	cout<<"cat found"<<endl;
	}
	else
	{
		cnt=0;
	//	cout<<"no cat reset cat count"<<endl;
	}
	if(cnt>max_cats)
	{
		//cout<<"max cats return"<<endl;
		return;
	}
	if(adj[u].size()==1 && u!=1)
	{
		(*ans)++;
	}
	list<int>::iterator i;
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		//cout<<"iterating:"<<*i<<endl;
		if(!visited[*i])
		{
			DFSUtil(*i,visited,cats_on_route,ans,cnt,max_cats);
		}
	/*	else
			cout<<*i<<" already visited"<<endl;*/
	}
}
int main(int argc, char const *argv[])
{
	int n,a,b,c,max_cats;
	cin>>n>>max_cats;
	Graph g(n+1);
	int cats_on_route[n+1];
	cats_on_route[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>cats_on_route[i];
	}
	for(int i=1;i<=n-1;i++)
	{
		cin>>a>>b;
		g.addEdge(a,b);
	}

	bool *visited=new bool[n+1];
	visited[0]=false;
	for(int i=1;i<=n;i++)
		visited[i]=false;
	int ans=0,cnt=0;
	g.DFSUtil(1,visited,cats_on_route,&ans,cnt,max_cats);
	cout<<ans<<endl;
	return 0;
}
