#include<iostream>
#include<iomanip>
#define ll long long
using namespace std;
int main()
{
	ll int t;cin>>t;
	for(int i=0;i<t;i++)
	{
		float hard,car,ten,c=0,d=0,a=0,b=0;cin>>hard>>car>>ten;

		if(hard> 50) {c++; a++; }
        if(car< 0.7) { c++; b++; }
		if(ten >5600) { c++; d++ ; }

		{
            if(c==3) cout<<10<<endl;
            else if(c==0) cout<<5<<endl;
            else if(c==1) cout<<6<<endl;
            else if(c==2)
			{
				if(a>0 && b>0) cout<<9<<endl;
				else if(a>0 && d>0) cout<<7<<endl;
				else if(d>0 && b>0) cout<<8<<endl;

			}
		}

	}
}

