#include<iostream>
using namespace std;
int main()
{
    int c ,n,n2,f;
     cin>>f>>n>>n2;
   while(f<=n)
    {
        c=(5*(f-32))/9;
        cout<<f<<" "<<c;
       cout<<endl;
        f=f+n2;
    }
}
