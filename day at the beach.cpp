#include<iostream>
using namespace std;

int mergenikal(int a[],int s,int e,int c)
{
     c++;
	 int mid=(s+e)/2;
	 if(s>=e) return 0;

	 int ans1= 1+ mergenikal(a,s,mid,c);
	  int ans2=1+ mergenikal(a,mid+1,e,c);
	   return max(ans1,ans2);


}



int main()
{
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cout<<mergenikal(a,0,n-1,0);

}
