#include<iostream>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<n+1;i++)cin>>a[i];
    int i=1,c=1;
	while(i<n+1)
	{

		 if(c==a[i])
		 {

		 	for(int j=1;j<n+1;j++)
			{
				if(i==a[j]) {cout<<j<<endl; break;}
			}
			c++; i=0;
		 }
		 //cout<<c;

		i++;

	}







}
