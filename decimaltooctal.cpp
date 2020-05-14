#include<iostream>
#include<math.h>
using namespace std;
int d2o(int no)
{ int rem=0,i=0,ans=0;
while(no!=0)
{
    rem=no%8;
    ans=rem*pow(10,i) +ans;
    no=no/8;

i++;} return ans;

}
int main()
{
    int n;cin>>n;
    cout<<d2o(n);
}

