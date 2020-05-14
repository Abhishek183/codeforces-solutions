#include<iostream>
using namespace std;
int main()
{
    int n,m ,l,k=1;
    cin>>n>>m;
    while(n!=0 && m!=0)
    {
        n=n-1;
        m=m-1;
        k++;
    }
    if(k%2==0)
        cout<<"Akshat";
    else
        cout<<"Malvika";
}

