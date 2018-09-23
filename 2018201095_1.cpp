#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bin(string str,int low,int high,char x)
{
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(str[mid]=='1')
        {
            while(str[mid-1]=='1')
                mid--;
            return mid;
        }
        else if(str[mid]=='0')
        {
            low=mid+1;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;string str;
    cin>>n;
    while(n--)
    {
        int s=str.size();
        cin>>str;
    cout<<bin(str,0,str.size()-1,'1')<<" ";
    }
    
    return 0;
}
