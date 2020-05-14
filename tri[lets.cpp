#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],i,c=0,d=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];}
         for(i=0;i<3;i++)
    {
        cin>>b[i];}
       for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
            c++;
        else if(b[i]>a[i])
            d++;
        else{}
    }
    cout<<c<<" "<<d;}

