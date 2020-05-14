#include<iostream>
#define ll long long
using namespace std;
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
	 ll int n;cin>>n;
	 ll int a[n][n];
	  for(int j=0;j<n;j++)
	  {
	  	for(int k=0;k<n;k++)
	  		cin>>a[j][k];
	  }ll int m=-1000;

	  for(int j=0;j<n;j++){
	  	for(int k=0;k<n;k++)
		{   int sum=0;
             int r=j,c=k;
		    while(r<n && c<n)
			{
				sum+=a[r][c];
				r++;c++;
			}

           if(sum>m) m=sum;
	    }
	  }
	    cout<<m<<endl;
	}


}
