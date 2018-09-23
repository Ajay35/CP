#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct node 
{
	bool is_end;
	struct node *child[2];
};
node *create_node()
{
	node *n=new node;
	for(int i=0;i<2;i++)
	{
		n->child[i]=NULL;
	}
	n->is_end=false;
	return n;
}
void insert(node *root,string no)
{
	node *tmp=root;
	for(int i=0;no[i];i++)
	{
		int index=no[i]-'0';
		if(tmp->child[index]==NULL)
		{
			tmp->child[index]=create_node();
			tmp=tmp->child[index];
		}
	}
	tmp->is_end=true;
}
string dectobin(int n)
{
	char bin32[]="00000000000000000000000000000000";
	for(int i=31;i>0;i--)
	{
		if(n%2)
		  bin32[i]='1';
		n/=2;
	}
	string str(bin32);
	return str;
}
string search_biggest_xor(node *root,string str)
{
	node *tmp=root;
	char lookup;
	string ans="";
	for(int i=0;str[i];i++)
	{
		if(str[i]=='1')
		{
			if(tmp->child[0]!=NULL)
			{
				tmp=tmp->child[0];
				ans+="1";
			cout<<"ans:"<<ans<<endl;
			}
			else if(tmp->child[1]!=NULL)
			{
				tmp=tmp->child[1];
				ans+="0";
				cout<<"ans:"<<ans<<endl;
			}
		}
		else
		{
			if(tmp->child[1]!=NULL)
			{
				tmp=tmp->child[0];
				ans+="0";
				cout<<"ans:"<<ans<<endl;
			}
			else if(tmp->child[0]!=NULL)
			{
				tmp=tmp->child[1];
				ans+="1";
				cout<<"ans:"<<ans<<endl;
			}
		}
	}
	return ans;	
}
int bin2dec(string str)
{
	int no,j=0;
	for(int i=str.size()-1;i>0;i--)
	{
		no+=pow(str[i],j++);
	}
	return no;
}
int main()
{
	node *root=create_node();
	int n,m,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		string str=dectobin(arr[i]);
		insert(root,str);
		cout<<"inserted:"<<str<<endl;
	}
	cin>>m;
	while(m--)
	{
		cin>>x;
		string str=dectobin(x);
		string ans=search_biggest_xor(root,str);
		cout<<bin2dec(ans)<<endl;
	}
	return 0;
}
