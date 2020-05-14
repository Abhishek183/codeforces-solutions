#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int target;cin>>target;
    sort(a,a+n);
    for(int i=0;i<n;i++){
    for(int k=i+1;k<n;k++)
    {
        int number=target-(a[i]+a[k]);
        for(int j=k+1;j<n;j++)
        {
            if(number==a[j])
              {cout<<a[i]<<", "<<a[k]<<" and "<<a[j]<<endl;}
        }
    }
}
}
