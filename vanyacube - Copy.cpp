#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0,c=0;
    cin>>n;

    while(n>=c)
        {
            sum=i+sum;
             c+=sum;
            //cout<<sum<<" "<<i<<c<<endl;
             i++;
    }

    cout<<i-2;
}
