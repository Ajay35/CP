#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define ll long long
using namespace std;
int main() {
    ll n,x,c=0;
    cin>>n>>x;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    ll i=0,j=1,k=2;
    while(i<n-2 && j<n-1 && k<n)
    {
        ll prod=arr[i]*arr[j]*arr[k];
        if(prod==x)
        {
            c++;
            if(i<n-2 && j<n-1 && k<n-1)
            {
                k++;
				//cout<<"k inc found"<<endl;
            }
			else if(j==n-2 && i<n-2)
            {
				//cout<<"i inc found"<<endl;
                i++;
                j=i+1;
                k=j+1;
            }            
			else if(i<n-2 && j<n-1 && k==n-1)
            {
				//cout<<"j inc found"<<endl;
                j++;
                k=j+1;
            }
            
        }
        else if(i<n-2 && j<n-1 && k<n-1)
        {
            k++;
		//	cout<<"k inc"<<endl;
        }
	
		else if(j==n-2 && i<n-2)
        {
			//cout<<"i inc"<<endl;
            i++;
            j=i+1;
            k=j+1;
        }	
        else if(i<n-2 && j<n-1 && k==n-1)
        {
			//cout<<"j inc"<<endl;
            j++;
            k=j+1;
        }
		
	
        
    }
   
    cout<<c<<endl;
    return 0;
}
