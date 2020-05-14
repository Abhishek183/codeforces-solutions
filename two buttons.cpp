#include<iostream>
using namespace std;

int button(int n,int m,int c)
{
  if(n==m){ return c ; }

   if(n<m) button(n,m/2,c+1);
   if(n>m) button(n,m+1,c+1);


}




int main(){
 int n,m,c=0;cin>>n>>m;

 cout<<button(n,m,0);
 //cout<<c;
 }
