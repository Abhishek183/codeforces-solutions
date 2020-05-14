#include<iostream>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
       ll  int n,neg=0,pos=0,c=0,d=0;
        cin>>n;
       ll  int a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[i];
            if(a[i]>0)
                pos++;
            else
                neg++;
        }

        if(pos==n || neg==n)
            cout<<n<<" "<<n<<endl;
        else
        {
            if(pos>neg)
                cout<<pos<<" "<<neg<<endl;
            else
                cout<<neg<<" "<<pos<<endl;
        }

    }
}
