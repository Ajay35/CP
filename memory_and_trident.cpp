#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x=0,y=0;
	string str;
	cin>>str;
	if(str.size()%2!=0)
	{
		cout<<-1<<endl;
	}
	else
	{
		for(int i=0;str[i];i++)
		{
			if(str[i]=='L')
				x--;
			else if(str[i]=='R')
				x++;
			else if(str[i]=='D')
				y--;
			else
				y++;
		}
		cout<<(abs(x)+abs(y))/2<<endl;
	}
	return 0;
}
