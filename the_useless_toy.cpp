#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int n;
	getline(cin,str);
	cin>>n;
	int states[4][2]={{94,0},{62,1},{118,2},{60,3}};
	int cw=0,ccw=0,inState,clock,anticlock;
	switch(str[0])
	{
		case '^':inState=0,cw=0,ccw=0;
				 clock=(inState+n%4)%4;
				 anticlock=(inState+(4-(n%4)))%4;
				 if(states[clock][0]==(int)str[2])
						cw=1;
				 if(states[anticlock][0]==(int)str[2])
						ccw=1;
				 if(cw==1 && ccw==1)
					cout<<"undefined"<<endl;
				 else if(cw==1 && ccw==0)
					cout<<"cw"<<endl;
				 else if(ccw==1 && cw==0)
					cout<<"ccw"<<endl;
				 else
					cout<<"undefined"<<endl;
				 break;
		case '>':inState=1,cw=0,ccw=0;
				 clock=(inState+n%4)%4;
				 anticlock=(inState+(4-(n%4)))%4;
				 if(states[clock][0]==(int)str[2])
						cw=1;
				 if(states[anticlock][0]==(int)str[2])
						ccw=1;
				 if(cw==1 && ccw==1)
					cout<<"undefined"<<endl;
				 else if(cw==1 && ccw==0)
					cout<<"cw"<<endl;
				 else if(ccw==1 && cw==0)
					cout<<"ccw"<<endl;
				 else
					cout<<"undefined"<<endl;
				 break;
		case 'v':inState=2,cw=0,ccw=0;
				 clock=(inState+n%4)%4;
				 anticlock=(inState+(4-(n%4)))%4;
				 if(states[clock][0]==(int)str[2])
						cw=1;
				 if(states[anticlock][0]==(int)str[2])
						ccw=1;
				 if(cw==1 && ccw==1)
					cout<<"undefined"<<endl;
				 else if(cw==1 && ccw==0)
					cout<<"cw"<<endl;
				 else if(ccw==1 && cw==0)
					cout<<"ccw"<<endl;
				 else
					cout<<"undefined"<<endl;
				 break;
		case '<':inState=3,cw=0,ccw=0;
				 clock=(inState+n%4)%4;
				 anticlock=(inState+(4-(n%4)))%4;
				 if(states[clock][0]==(int)str[2])
						cw=1;
				 if(states[anticlock][0]==(int)str[2])
						ccw=1;
				 if(cw==1 && ccw==1)
					cout<<"undefined"<<endl;
				 else if(cw==1 && ccw==0)
					cout<<"cw"<<endl;
				 else if(ccw==1 && cw==0)
					cout<<"ccw"<<endl;
				 else
					cout<<"undefined"<<endl;	
				 break;
	}
	return 0;	
}
