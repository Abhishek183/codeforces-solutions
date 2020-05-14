#include<iostream>
using namespace std;
#define ll long long
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t ;i++)
	{
		ll int n,c=0,d=0; cin>>n;
		string str1="123",str2="123";
		for(int j=0;j<n;j++)
		{
			string nstr;
			cin>>nstr;

			if(str1=="123" || nstr==str1)
				 {  str1=nstr; c++;

			    }
		   else{
				str2=nstr; d++;
				}

		}
		if(c>d) cout<<str1<<endl;
		else if(c==d) cout<<"Draw"<<endl;
		else cout<<str2<<endl;



	}
}
