#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{ string s;cin>>s;
int  k=s.size();
int hh1=((s[0]-'0'))*10 +  ((s[1]-'0'));
 if(s[8]=='P')
   {
    if(hh1==12) {cout<<hh1;}
    else cout<<hh1+12;
   }


 else
    if(hh1==12) {cout<<"00";}
    else {cout<<s[0]<<s[1];}


  for(int i=2;i<8;i++) cout<<s[i];
 }


