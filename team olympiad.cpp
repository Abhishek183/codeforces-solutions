#include<iostream>
using namespace std;
int main()
{

	int n,t1=0,t2=0,t3=0;
	cin>>n;
	int a[n+1],x[n+1];
	for(int i=1;i<=n;i++)
	{cin>>a[i];
	 if(a[i]==1) {t1++; }
	 else if(a[i]==2) t2++;
	 else  t3++;
	 x[i]=1;
	}
	int s=min(t1,min(t2,t3));  cout<<s<<endl;

	for(int j=1;j<=n && s>0;j++)
	{
	 for(int i=1;i<=n;i++) {if(a[i]==1 && x[i]!=0) {cout<<i<<" "; x[i]=0;break; }}
	 for(int i=1;i<=n;i++) if(a[i]==2 && x[i]!=0) {cout<<i<<" "; x[i]=0;break; }
	 for(int i=1;i<=n;i++) if(a[i]==3 && x[i]!=0) {cout<<i<<endl; x[i]=0;break; }
	 s--;
	}






}
