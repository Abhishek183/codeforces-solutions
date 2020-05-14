#include<iostream>
using namespace std;

float sqrt(int n)
{
    int s=0,e=n;
    int mid;
    while(s<e)
    {   mid=(s+e)/2;
        if(mid*mid>n) e=mid;
        else s++;

    } float ans=mid;

       if(mid*mid==n) return mid;
     ans=ans+0.1;


      float i=0.1;
      int j=1;


      while(j<=2)
        {
        while(ans*ans<n)
         {
             ans+=i;
         }

        ans-=i;
        j++;
        i=i/10;
      }
      return ans;
}


int main()
{
    int n;
    cin>>n;
    cout<<sqrt(n);


}
