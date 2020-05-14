#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;


    for(int i=0; i<t; i++)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;

        int maxi=max(a,b);
		int mini=min(a,b);

        if(x+maxi>n)
		{
		  b=n;
		  x=x+maxi-n;

		  a=mini-x;
		  if(a<=0) {a=1; cout<<abs(a-b)<<endl;  }
		  else
		  {
		  	cout<<abs(a-b)<<endl;
		  }



		}
        else
		{
			cout<<x+abs(a-b)<<endl;
		}

   }
}
