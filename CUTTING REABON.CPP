#include<iostream>
using namespace std;


 int box[40001]={0};
int kat(int n,int a,int b,int c)
{
      if(box[n]!=0) return box[n];

	   if(n==0) return 0;
	   if(n<0) return -1000000;
	   int ans1=-10000000,ans2=-100000000,ans3=-10000000;
	   if(n-a>=0)  ans1=kat(n-a,a,b,c);
	   if(n-b>=0)  ans2=kat(n-b,a,b,c);
	   if(n-c>=0)  ans3=kat(n-c,a,b,c);

       //cout<<n-a<<" "<<n-b<<" "<<n-c<<endl; ;
	   int finalans=1+max(max(ans1,ans2),ans3);
	   box[n]=finalans;
	   return box[n];





}


int main()
{
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<kat(n,a,b,c);
}
