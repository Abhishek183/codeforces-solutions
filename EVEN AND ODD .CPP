#include<iostream>
using namespace std;
int main(){

 long long int n,k;
 cin>>n>>k;

 if(n%2==0)
 {  long long int mid=n/2;
 	if(k<=mid) cout<<k*2-1;
 	else cout<<" "<<(k-mid)*2;

 }
 else
 {  long long int mid=(n/2)+1;
 	if(k<=mid) cout<<k*2-1;
 	else cout<<" "<<(k-mid)*2;
 }



}
