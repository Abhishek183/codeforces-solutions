#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    int c=0,i,d=0;
    if(s1.size()==1)
        {if(islower(s1[0]))
              {s2=s1[0]-32;cout<<s2;}
        else
        { s2=s1[0]+32;cout<<s2;}
            }


    else if( 1<s1.size())
    {  for(int i=0;i<s1.size();i++)
       {
              if(isupper(s1[i]) )
                if(d<=1 ) {s2[i]=s1[i]+32;c++;}
                else
                    {for(int i=0;i<s1.size();i++) {cout<<s1[i]; }return 0;}


              else if(islower(s1[i]))
                    if(c==0) {s2[i]=s1[i]-32; d++;}
                    else
                    {for(int i=0;i<s1.size();i++) {cout<<s1[i]; }return 0;}

       }
       if(d<=1)for(int i=0;i<s1.size();i++) cout<<s2[i];
       else for(int i=0;i<s1.size();i++) cout<<s1[i];

    }

}
