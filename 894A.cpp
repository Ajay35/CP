#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int c=0;
	cin>>str;
	int len=str.size();
	for(int i=0;i<=len-3;i++)
	{
		if(str[i]!='Q')
			continue;
		for(int j=i+1;j<=len-2;j++)
		{
			if(str[j]!='A')
				continue;
			for(int k=j+1;k<=len-1;k++)
			{
				if(str[k]!='Q')	
					continue;			
				else
					c++;
			}
		}
	}
	cout<<c<<endl;	

	return 0;
}
