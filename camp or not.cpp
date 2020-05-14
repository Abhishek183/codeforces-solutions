#include<iostream>
#include<vector>
using namespace std;
int main()
{
	 int t;
	 cin>>t;
	for(int t1=0;t1<t;t1++)
	{
		int n;cin>>n;
        int x[n],y[n];
		for(int i=0;i<n;i++)
		{
           cin>>x[i]>>y[i];

		}

		int d;cin>>d;

		for(int i=0;i<d;i++)
		{
           int x1,y1;cin>>x1>>y1;

            int sum=0;
           for(auto j=0;j<n;j++)
		   {
		   	     if(x1>=x[j]) sum+=y[j];

		   }
		   if(sum>=y1) cout<<"Go Camp"<<endl;
           else cout<<"Go Sleep"<<endl;

		}

		}


}
