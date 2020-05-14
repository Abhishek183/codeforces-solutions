#include<iostream>
#include<string>
#define ll long long
using namespace std;
 int main()
 {
 	ll int t;cin>>t;

for(int i=0;i<t;i++)
 {
 	int n1,n2;
 	cin>>n1>>n2;

 	if(n1>n2) cout<<">";
 	else if(n1<n2) cout<<"<";
 	else cout<<"=";
 }
 }

