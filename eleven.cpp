#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n==0) return 0;
	if(n==1)  return 1;
	 return fibo(n-1)+fibo(n-2);
}
int main()
{
	int n,i=1;cin>>n;
	int a[n+1];
	 a[0]=0;
	while(a[i-1]<n){

	 a[i]=fibo(i);

	 i++;}
     int c,j;
	for(int i=1;i<=n;i++)
	{     c=0,j=1;
	   while(a[j]<=n)
		{
			if(i==a[j]) {cout<<"O"; c++; break; }
             j++;
			}
       if(c==0) cout<<"o";
		}

     }

