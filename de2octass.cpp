#include<iostream>
using namespace std;
int main()
{
    int n,res=0;
    cin>>n;
    while(n!=0)
    {
        res=n%8+res*10;
        n=n/8;
    }cout<<res;
}
