#include<iostream>
using namespace std;

int func(int a,int b)
{
     if(a==b) return 0;

     else if(a>b)
	 {
	 	if((a%2==0 && b%2==0)|| (a%2==1 && b%2==1) ) return 1;
	 	else if((a%2==0 && b%2==1)|| (a%2==1 && b%2==0) ) return 2;

	 }
	 else
	 {      if((a%2==0 && b%2==0)|| (a%2==1 && b%2==1) ) return 2;
	 	 	else if((a%2==0 && b%2==1)|| (a%2==1 && b%2==0) ) return 1;
	 }



}
int main()
{

	int t;cin>>t;

	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;

		cout<<func(a,b)<<endl;

	}


}
