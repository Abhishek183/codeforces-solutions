#include<iostream>
using namespace std;
int main(){

   int n,m;
   cin>>n>>m;
   int c[6]={0};
   char a[n*m];

   for(int i=0;i<n*m;i++)

   {
   	  cin>>a[i];
   	  if(a[i]=='M')       {c[0]++;}
	  else if(a[i]=='Y')  {c[1]++;}
	  else if(a[i]=='C')  {c[2]++;}
	  else if(a[i]=='G')  {c[3]++;}
	  else if(a[i]=='B')  {c[4]++;}
	  else if(a[i]=='W')  {c[5]++;}
   }
    //for(int i=0;i<6;i++) cout<<c[i];
    if( c[0]>0 || c[1]>0 || c[2]>0  ) cout<<"#Color";
    else if( (c[0]==0 && c[1]==0 && c[2]==0 )&&( c[5]>0 || c[3]>0 || c[4]>0) ) cout<<"#Black&White";


}
