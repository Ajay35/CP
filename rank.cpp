#include "bits/stdc++.h"
using namespace std;
int compare( const void *aa, const void  *bb)
{
    int *a=(int *)aa;
    int *b=(int *)bb;
    if (a[0]>b[0])
     return -1;
    else if (a[0]==b[0]) 
    return 1;
    else  
     return 1;

}
int main() 
{
	int n,marks;
	cin>>n;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
		int sum=0;
        for(int j=0;j<4;j++)
        {
            cin>>marks;
			sum+=marks;
        }
        a[i][1]=i+1;
		a[i][0]=sum;
    }
    qsort(a,n,sizeof(a[0]),compare);
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i][1]==1)
			break;
	}
	cout<<i+1<<endl;
    return 0;
   }
