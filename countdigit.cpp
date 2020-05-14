#include<iostream>
using namespace std;
int main()
{
    int c=0 ,d,n,rem;
     cin>>n>>d;
     while(n!=0)
     {
         rem=n%10;
         n=n/10;
         if(rem==d) c++;
     }cout<<c;

}

