#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];
      int cal=(a[i]/5)+1;
      int ans=5*cal;
     if(a[i]>=38 && ans-a[i]<3) cout<<ans<<endl;
     else cout<<a[i]<<endl;

    }

}
