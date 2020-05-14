#include<iostream>
using namespace std;
int main(){

 int n,d,co=0;
 cin>>n>>d;
 int a[n];

 for(int i=0;i<n;i++) cin>>a[i];

 for(int i=0;i<n;i++)
 {     int c=0,d1=0;

 	for(int j=0;j<i;j++)
	{
		if(a[i]-d==a[j]) {c=1; cout<<a[j]<<":"; break;} }

 	for(int j=i+1;j<n;j++)
	{

		if(a[i]+d==a[j]) {d1=1;cout<<a[j]<<endl;break;}}



	 if(c==1 && d1==1) co++;
 }


      cout<<co;



}
