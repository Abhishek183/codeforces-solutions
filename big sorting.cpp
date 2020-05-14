#include<iostream>
#include<algorithm>
using namespace std;

bool compare (string a,string b)
{

	if(a.size()<b.size()) return true;
	else if(a.size()>b.size()) return false;
	else
	{
		for(int i=0;i<a.size();i++)
		{
			if(int('a[i]'-48)<int('b[i]'-48)) return(a<b);
			else if (int('a[i]'-48)>int('b[i]'-48) )return(a>b);
			else continue;
		}
          return a<b;
	}



}




int main()

{

 int n;
 cin>>n;
 string s[n];
 for(int i=0;i<n;i++) cin>>s[i];

 sort(s,s+n,compare);
     //cout<<int('3'-48)<<" ";
for(int i=0;i<n;i++) cout<<s[i]<<endl;




}
