#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int h=(n+1)/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((j==1 && i<=h)||(i==1 && j>=h) || (j==h) || (i==h) || (i==n && j<=h) || (j==n && i>=h) || (i==n && j<=h)) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
