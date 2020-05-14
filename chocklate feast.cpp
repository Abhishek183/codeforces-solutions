#include<iostream>
using namespace std;
#define ll long long
int main(){

  ll int t;
   cin>>t;
 while(t--)
 {


 	ll int n,c,m;
 	cin>>n>>c>>m;

 	ll int b=n/c;
	ll int w=b;
 	while(true)
	{

		//cout<<b<<","<<w<<" ";
		b+=w/m;
		if(w==0 || w<m) break;
		else {w=w%m + w/m;}
	}
	cout<<b<<endl;







 }



}
