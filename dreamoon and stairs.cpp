#include<iostream>
using namespace std;
int main()
{
	int n,l=0,m,k=0;
	cin>>n>>m;
	int c=n/2;
	int ans=c;
	if(n%2!=0) c++;
	//cout<<c<<" "<<ans<<endl;
	for(int i=0;i<=ans;i++)
	{

		 if(c%m==0) {k=1; break;}
		 c++;
	}
	if(k==1) cout<<c;
	else cout<<-1;


}
