#include<iostream>
#include<stack>
using namespace std;
bool para(char str[],stack<char>s)
{    int cnt=0,i=0;
     for(i=0;str[i]!='\0';i++)
     { char ch=str[i];
      if(ch==')')
       { char top=s.top();
       int cnt=0;
         while(top!='(')
         {  cnt++;
             top=s.top();
             s.pop();
         }
         if(cnt==0) return true;}




      else
      s.push(ch);
     }

     return false;
}


int main()
{
    char str[]="((a+b)+((c+d)))";
    stack<char>s;
   cout<<para(str,s);
}
