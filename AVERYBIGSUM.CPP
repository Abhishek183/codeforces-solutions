#include<iostream>
using namespace std;

 long long int sum(long long int a[],int n)
{   long long int jod=0;
    for(int i=0;i<n;i++)
    {
        jod=jod+a[i];
    } return jod;




}
int main()
{   int n;cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<sum(a,n);
}

