#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    string s1,s2,s3="";
    cin>>s1>>s2;
    for(int i=0;s1[i];i++)
       (s1[i]!=s2[i])?s3+='1':s3+='0';
    cout<<s3<<"\n";
}
