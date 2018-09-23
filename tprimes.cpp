#include<bits/stdc++.h>
using namespace std;
int main()
{	

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	long long n,k,c;
	bool sieve[1000001];
	memset(sieve,true,sizeof(sieve));
	sieve[1]=false;
	for (int p=2;p*p<=1000001;p++)
    {
        if (sieve[p]==true)
        {
            for (int i=p*2;i<=1000001;i+=p)
			{
                sieve[i] = false;
			}
        }
    }
	cin>>n;
	while(n--)
	{
		c=0;
		cin>>k;
		double num=(double)sqrt(k);
		if(num==(int)num)
		{
			if(sieve[(int)num])
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}
