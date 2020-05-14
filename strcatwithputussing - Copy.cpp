
#include<iostream>
using namespace std;
int main()
{
   char str1[50], str2[50], i, j;
   cin>>str1;
   cin>>str2;

   for(i=0; str1[i]!='\0'; ++i);


   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }

   str1[i]='\0';
   cout<<str1;

}
