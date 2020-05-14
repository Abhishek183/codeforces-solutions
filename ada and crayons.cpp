#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int u=0,d=0,j=0;
		 if(s[0]=='U') {u=1,d=0;}
		 else {d=1,u=0;}

		while(s[j]!='\0')
		{


		  if(s[j]=='U')
		  {
		  	if(s[j+1]=='D') d++;
		  }
		  else if(s[j]=='D')
		  	if(s[j+1]=='U') u++;

		  j++;

		}
		cout<<min(u,d)<<endl;
	}

}
