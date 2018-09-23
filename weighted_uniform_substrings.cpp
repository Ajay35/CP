#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int q;
    string str;
    cin>>str;
    cin>>q;
    vector<int> weights;
    int temp=(int)str[0]-96;
    weights.push_back(temp);
    for(int i=1;str[i];i++)
    {
        if(str[i]==str[i-1])
         {
             temp+=((int)str[i]-96);
             weights.push_back(temp);
         }
         else
            {
                temp=(int)str[i]-96;
                weights.push_back(temp);
            }   
    }
    for(int i=0;i<q;i++)
    {
        int t;
        cin>>t;
        if(std::find(std::begin(weights), std::end(weights), t) != std::end(weights))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
