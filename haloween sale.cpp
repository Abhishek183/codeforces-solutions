#include<iostream>
using namespace std;
int main()
{


	int p,d,m,s;
	cin>>p>>d>>m>>s;
	int c,mo=0;

	if(s>=p) c=1;
	else c=0;
	s-=p;
	while(s>=m)
	{


		if(p-d>=m) p-=d;
		else p=m;
		s=s-p;
		c++;



      //  cout<<p<<" ";

	}
	cout<<c;






}
