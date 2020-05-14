#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    int n,c1=0,c2=0;
    cin>>n;
    int a[5]={0};
    for(int i=0;i<n;i++){ int x;cin>>x; a[x]++;}
      int x;
    while(a[1]!=0 || a[2]!=0 || a[3]!=0 || a[4]!=0)
	{
		if(a[3]>0 && a[1]>0)
		{
			int x=min(a[1],a[3]);
			a[1]=a[1]-x;
			a[3]=a[3]-x;
			c1=x;
		}

		else if(a[2]>0 && a[1]>0)
		{
			c2=a[2]/2+a[1]/4;
			a[2]=0;
			a[1]=0;
			cout<<c2;
		}

	}
//cout<<c;

}

