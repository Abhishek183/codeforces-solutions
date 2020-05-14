#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool check(stack<char>&s,char str[])
{
    //if(s.empty()) return true;
    int cnt=0;
     for(int j=0;str[j]!='\0';j++){cout<<"s";
   if(str[j]=='('){
    for(int i=j;str[i-1]!=')' ;i++)
    {   char ch=str[i];
    cout<<str[i];
        s.push(ch);
        cnt++;}
        //if(str[j]==')')
         {cout<<endl;
           for(int i=j;str[i-1]!='(';i++)
         {
             if(cnt==0) return false;
              else s.pop();
         }
         }
    }
     } return true;}

int main()
{
    stack<char>s;
     char str[]= "((a+b)+((c+d)))";
    cout<< check(s,str);
}
