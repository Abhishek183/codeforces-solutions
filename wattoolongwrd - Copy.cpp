#include<iostream>
using namespace std;
int n,i,k,a;
string s;
main()
{cin>>n;
for(i=0;i<n;i++)
{cin>>s;
k=s.size();
if(k<=10)cout<<s<<endl;
else cout<<s[0]<<k-2<<s[k-1]<<endl;}}
