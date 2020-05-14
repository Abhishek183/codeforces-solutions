#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    long double res=0;
    cin>>n;
    long double a[n],k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        res=a[i]/100 + res;
    }k=(res*100)/n;
    cout <<setprecision(12) << k;

}
