#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,num;
    cin>>n;
    int a[n];
    n = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
        cin>>a[i];
    int leftm=0,rightm=0;
    int i=0;
    while(i<=n-1)
    {
        if(a[i]<a[n])
        {
            if(leftm<a[i])
                leftm=a[i];
            else
            {
                sum=leftm-a[i]+sum;
            }
            i++;
        }

        else
        {
            if(a[n]>rightm)
                rightm=a[n];
            else
                sum=sum+rightm-a[n];
            n--;
        }



    }
    cout<<sum;


}
