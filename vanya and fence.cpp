#include<iostream>
using namespace std;
#define ll long long
int main(){

 ll int n,h,c=0;
 cin>>n>>h;

 ll int a[n];

 for(ll int i=0;i<n;i++)
 {
 	cin>>a[i];
 	if(a[i]>h) c+=2;
 	else c++;
 }
 cout<<c;





}
