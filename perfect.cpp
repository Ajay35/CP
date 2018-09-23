#include<bits/stdc++.h>
using namespace std;
int check(long long int x)
{
    int sum=0;
    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }
    if(sum==10)
        return 1;
    else
        return 0;
}
int main()
{
    long long int arr[10000];
    arr[0]=19;
    int j=1,i=1;
    long long temp=arr[0];
    while(i!=10000)
    {
        temp+=9;
        if(check(temp))
        {
            arr[i]=temp;
            i++;
        }
        j++;
    }
    int k;
    std::cin>>k;
    std::cout<<arr[k-1]<<endl;
    return 0;
}