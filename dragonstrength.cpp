#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,s,n,sum=0,l=0;
    cin>>s>>n;
    pair<int,int>a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;

    }sort(a,a+n);
    for(i=0;i<n;i++)
    { l=0;
        if(s>a[i].first)
        {
            s=s+(a[i].second);
            l=1;
        }
    } if(l==1)
        cout<<"YES";
      else
        cout<<"NO";
}
