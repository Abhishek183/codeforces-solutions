#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1],b[101]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
     int c=0;
    for(int i=1;i<=n;i++)
	{

	      {
		    c+=b[a[i]]/2;
		    b[a[i]]=0;

		 }
	}
	cout<<c<<endl;

}

