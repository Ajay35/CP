#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,x=0;
	cin>>l;
	string input;
	while(l--)
	{
		cin>>input;
		if(input[0]!='X')
		{
			if(input[0]=='+')
			{
				++x;
			}
			else
			{
				--x;
			}
		}
		else
		{
			if(input[1]=='+')
			{
				x++;
			}
			else
			{
				x--;
			}				
		}
	}
	cout<<x<<endl;
	return 0;
}
