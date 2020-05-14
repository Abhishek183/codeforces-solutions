#include<iostream>
using namespace std;
#define ll long long
int main()
{

	int t;cin>>t;
	for(int i=0;i<t;i++)
	{
	   int n,sum=0,rem=0;cin>>n;
	   int rev=n;
	   while(rev!=0)
	   {
	   	rem=rev%10;
	   	sum=sum*10+rem;
	   	rev=rev/10;
	   }
	   if(n==sum) cout<<"wins"<<endl;
	   else cout<<"losses"<<endl;
	}
}
