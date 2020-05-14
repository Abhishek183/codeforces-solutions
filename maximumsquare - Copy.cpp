#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int k;
    cin>>k;
    for(int j=0; j<k; j++)
    {
        int n;
        cin>>n;
        int a[n];
        int c=0,flg=0,area=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
		{
			int len=n-i,temp=a[i];
			while(len!=temp)
			{
				if(n-i<temp) temp--;
				else len--;
			} int ans=temp*len;

			if(area<ans)
			{
				area=ans;
				c=len;
			}
		}
		cout<<c<<endl;
        }
}
