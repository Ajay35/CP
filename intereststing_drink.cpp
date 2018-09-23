#include<bits/stdc++.h>
using namespace std;
int bin_search(int arr[], int n, int x)
{
    int low=0,mid,high= n;
    while (low<high)
    {
        mid =low+(high-low)/2;
        if (arr[mid]==x)
        {
            while (arr[mid+1]==x && (mid+1)<n)
                 mid++;
            break;
        }
        else if (arr[mid]>x)
            	high=mid;
        else
            low=mid+1;
    }
    while (arr[mid]>x && mid>0)
        mid--;
    	return mid+1;
}

int main()
{
	int n,q,x;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	std::sort(arr,arr+n);
	scanf("%d",&q);
	while(q--)
	{
		int count=0;
		scanf("%d",&x);
		if(arr[n-1]<=x)
			cout<<n<<endl;
		else if(arr[0]>x)
			cout<<0<<endl;
		else
			{
				printf("%d\n",bin_search(arr,n,x));
			}		
	}
	return 0;
}
