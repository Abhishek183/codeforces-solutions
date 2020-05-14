#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int m;cin>>m;
	int b[m];
	for(int i=0;i<m;i++) cin>>b[i];
	 int c[m+n];
	for(int i=0;i<m+n;i++)
	{
		if(i<n) c[i]=a[i];
		else c[i]=b[i-n];


	}
	sort(c,c+m+n,greater<int>())  ;
	 // for(int i=0;i<m+n;i++) cout<<c[i]<<" ";
	int r[m+n];
	r[0]=1;
	int ra=1;
	for(int i=1;i<m+n;i++)
	{
		 if(c[i]<c[i-1]) r[i]=++ra;
		 else r[i]=ra;
	}
    //for(int i=0;i<m+n;i++) cout<<r[i];

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m+n;j++)
		{


			if(b[i]==c[j]) {cout<<r[j]<<endl; break;}
		}



	}

}
