#include<iostream>>
#include<math.h>
using namespace std;
int main()
{
    int r,q,n,k,j,c=0,l,sum=0;
    cin>>n;
    while(n!=0)
    {
        r=n%8;
        n=n/8;
        j=pow(10,c);
        c++;
        l=r*j;
    sum=l+sum;}
    cout<<sum;
}
