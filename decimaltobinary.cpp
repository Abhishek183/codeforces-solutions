#include<iostream>
#include<math.h>
using namespace std;
int b2d(int no)
{ int rem=0,i=0,ans=0;
while(no!=0)
{
    rem=no%10;
    ans=(rem*pow(2,i)) +ans;
    no=no/10;

i++;} return ans;

}
int main()
{
    int n;cin>>n;
    cout<<b2d(n);
}
