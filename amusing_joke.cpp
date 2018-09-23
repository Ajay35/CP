#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,s3;
	bool possible=true;
	cin>>s1>>s2>>s3;
	int size1=s1.size()+s2.size();
	int size2=s3.size();	

	if(size1!=size2)
		cout<<"NO"<<endl;
	else
	{
		int arr1[26]={0},arr2[26]={0};
		string s4=s1+s2;
		for(int i=0;s4[i];i++)
		{
			arr1[(int)s4[i]-65]++;
			arr2[(int)s3[i]-65]++;
		}
		for(int i=0;i<26;i++)
		{
			(arr1[i]!=arr2[i])?possible=false:possible;
		}
		if(possible)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;	
}
