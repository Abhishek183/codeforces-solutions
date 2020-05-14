#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	string s;
	cin>>s;
	 int c=0,k=0;
	for(int i=0;i<n;i++)
	{

	  int x=count(s.begin(), s.end(), s[i]);
	  if(x==1 && s[i]!='_') {cout<<"NO"<<endl; k=1; break; }


    }
    if(count(s.begin(), s.end(), '_')==0 && k==0)
	{

		for(int i=1;i<n-1;i++)
		{
			if(s[i]!=s[i-1] && s[i]!=s[i+1] ) {cout<<"NO"<<endl;k=1; break; }
		}

       if(k==0) cout<<"YES"<<endl;
	}
	else if(k==0) cout<<"YES"<<endl;


    }
}
