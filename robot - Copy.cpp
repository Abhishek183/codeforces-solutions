#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        if(x1==x2)
        {
            if(y1<y2)
                cout<<"up"<<endl;
            else
                cout<<"down"<<endl;
        }
        else if(y1==y2)
        {
            if(x1<x2)
                cout<<"right";
            else
                cout<<"left"<<endl;
        }
        else
            cout<<"sad"<<endl;

    }
}
