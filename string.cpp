#include <iostream>     
#include <algorithm>    
#include<bits/stdc++.h>
using namespace std;
int main () 
{
    int n,t;
  cin>>t;
  while(t--)
  {
    cin>>n;
    string str1;
    vector<string> str;
    for(int i=0;i<n;i++)
    {
        cin>>str1;
        str.push_back(str1);
    }
    bool flag=true;
    do 
    {
        int i=0;
        for(i=0;i<str.size()-1;i++)
        {
            //cout<<str[i]<< " "<<str[i+1]<<endl;
            //cout<<str[i][str[i].size()-1]<<" "<<str[i+1][0]<<endl;
            if(str[i][str[i].size()-1]!=str[i+1][0])
            {
                //cout<<"flag false set"<<endl;
                flag=false;
                //break;
            }
        }
        if(i==str.size()-1)
            flag=true;
        if(flag)
        {
            //cout<<"valid"<<endl;
            break;
        }
        //cout<<endl;
    } while(std::next_permutation(str.begin(),str.end()));

     if(flag)
        cout<<"Yes"<<endl;
     else
        cout<<"No"<<endl;
  }
 

  return 0;
}