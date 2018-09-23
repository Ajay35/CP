#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';s[1]='0';
            s= "00"+s.substr(2,6);
        }
        else
        {
            s= s.substr(0,8);
        }
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s= s.substr(0,8);
        }
        else
        {
            int time=(((int)s[0]-48)*10+((int)s[1]-48)*1)+12;
            s[1]=(char)(time%10+48);
            time/=10;
            s[0]=(char)(time%10+48);
            s=s.substr(0,8);
        }
    }
    return s;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";
    cout<<result<<endl;
    fout.close();

    return 0;
}
