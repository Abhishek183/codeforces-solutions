#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin>>t  ;
    for(int j=0; j<t;j++)
    {
        ll int a[30];
        ll int c=0;
        for(int i=0; i<30; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<30; i++)
        {
            if(a[i]==1)
                c++;
            else
                c=0;
            if(c>5)
            {
                cout<<"#coderlifematters"<<endl;
                break;
            }
        }
        if(c<=5)
            cout<<"#allcodersarefun"<<endl;
    }
}

