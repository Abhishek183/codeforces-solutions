#include<iostream>
using namespace std;
#include<string>
int main()
{
   string s;
   cin>>s;


   for(int i=0;i<s.size();i++)
   {
   	  int n=int(s[i])-48;
       if(i==0 && n==9) cout<<9;
	   else if(n>=5) cout<<9-n;
	   else cout<<n;


   }


}
