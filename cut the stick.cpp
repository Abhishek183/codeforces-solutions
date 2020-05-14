#include<iostream>
using namespace std;
#include<algorithm>
int main()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);
	int c=0;
	for(int i=0;i<n;i++)
	{


	   if(a[i]>0){
	   		c=0;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>0)
			{ c++;
			  a[j]=a[j]-a[i];

			}


		} cout<<c+1<<endl;
	   }


	}




}
