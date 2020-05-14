#include<iostream>
#include<string>
using namespace std;
int main()
{
     int n;cin>>n;
    string s;
    cin>>s;



      int c=0,d=0,e=0,f=0;
        for(int i=0;i<s.size();i++)
        {

            if( c==0 && s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5'  || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9')
            {
                c=1;
            }

            else if(isupper(s[i]) && d==0) d=1;
            else if(islower(s[i]) && e==0) e=1;
            else if(f==0 && s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='-' || s[i]=='+')
            {
                f=1;
            }


        }
        // cout<<c<<d<<e<<f;
         if(s.size()<6) {
          cout<<max(4-(c+d+e+f),6-n); }
          else cout<<4-(c+d+e+f);







}
