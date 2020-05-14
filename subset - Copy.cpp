#include<iostream>
using namespace std;

void subset(int a[],int iin,int n,int b[],int oin,int len,int k)
{
	if(iin==n) {if(len==k){cout<<b[i];} cout<<endl; return; }

  b[oin]=a[iin];
 subset(a,iin+1,n,b,oin+1,len+1);
 subset(a,iin+1,n,b,oin,len);

}

int main()
{   int t;cin>>t;
  for(int i=0;i<t;i++)
  {
	int n,k;cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;i++) cin>>a[i];
	subset(a,0,n,b,0,0,k);
  }
}
