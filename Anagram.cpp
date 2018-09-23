#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str.size()%2==0)
        {
            int str_size=str.size()/2;
            string str1=str.substr(0,str_size-1);
            string str2=str.substr(str_size,str.size()-1);
            cout<<str1<<" "<<str2<<endl;
            cout<<"Done"<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}