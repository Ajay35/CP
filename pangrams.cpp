#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    getline(cin,str);
    int small_l[26]={0},capital_l[26]={0};

    for(int i=0;str[i];i++)
    {
        int val=(int)str[i];
        if(val>=97 && val<=122)
        {
            small_l[val-97]++;
        }
        else if(val>=65 && val<=90)
        {
            capital_l[val-65]++;
        }
    }
    bool flag=true;
    for(int i=0;i<26;i++)
    {
        if(small_l[i]==0 && capital_l[i]==0)
         {
             flag=false;
             break;
         }   
    }
    if(flag)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}
