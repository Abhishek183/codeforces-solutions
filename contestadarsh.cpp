#include<iostream>
using namespace std;


bool bracks(char str[],char str2[],int&pos)

{

    if(str[0]=='\0' && pos==0) return "YES";
    if(str[0]=='[' || str[0]=='{' || str[0]=='(' )
    {   str2[pos]=str[0];
         pos++;}


    if(str[0]==']' && str2[pos-1]=='['||(str[0]=='}' && str2[pos-1]=='{')||  (str[0]==')' && str2[pos-1]=='('))
    {
        pos--;
    }
    else if(str[0]==']' && str2[pos-1]!='['||(str[0]=='}' && str2[pos-1]!='{')||  (str[0]==')' && str2[pos-1]!='('))
      {return "NO";

      }

     return bracks(str+1,str2,pos);
}

int main()
{   long int n;cin>>n;
    char str[100000];

    for(int i=0;i<n;i++)
    {cin>>str;
    char str2[100000]="";
    int pos=0;
    cout<<bracks(str,str2,pos);}
}
