#include<iostream>
#include<string>
using namespace std;
int main()
{ string s;
   int i,j,c=1;
   cin>>s;
   for(i=1;i<(s.size()-1);i=i+2)
   {
       for(j=1;j<i;j=j+2)
       {
           if(s[i]==s[j])
             {c=c;
             }

       }
   }cout<<s.size()-c-2;

}
