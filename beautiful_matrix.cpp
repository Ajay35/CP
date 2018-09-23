#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],ind,indi,indj;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
			{	
				indi=i+1;
				indj=j+1;
			}
        }
    }
    cout<<abs(3-indi)+abs(3-indj)<<endl;
	return 0;
}
