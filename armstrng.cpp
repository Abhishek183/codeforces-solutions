#include<iostream>
#include<math.h>
using namespace std;
void arm(int n)
{ int c=0;int p=n;
    while(n!=0)
    {
        int d=n%10;
        n=n/10; c++;
    }
    int z=p;


    int sum=0;
    while(p!=0)
    {
        int d=p%10;
        sum=sum+pow(d,c);
        p=p/10;
    }
    if(sum==z) cout<< "true";
     else cout<< "false";
}
int main()
{
    int n;
    cin>>n;
   arm(n);

}
