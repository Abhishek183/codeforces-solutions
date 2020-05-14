#include<iostream>
#include<math.h>
using namespace std;
int btd(int n)
{int i=0,v=0,d;
 while(n!=0)
  {  d=n%10;
     v=v+(d*pow(2,i));
     n=n/10;
   i++;}
   return v;

}
 int main()
 {
     int k;cin>>k;
        cout<<btd(k);
 }


