#include<iostream>

using namespace std;
void count(long long int ar[],long long int m,long long int br[],long long int  n,long long int s,long long int t,long long int a, int b)
{ long long int c=0;
    for( int i=0;i<m;i++)
    {
        if(ar[i]+a>=s && ar[i]+a<=t) c++;

    } cout<<c<<endl;
    c=0;
    for( int i=0;i<n;i++)
    {
        if(br[i]+b<=t && br[i]+b>=s) c++;

    } cout<< c;

}
int main()
{

 long long int s,t,a,b,m,n;
 cin>>s>>t>>a>>b>>m>>n;
 long long int ar[m],br[n];
 for( int i=0;i<m;i++) cin>>ar[i];
 for( int i=0;i<n;i++) cin>>br[i];
 count(ar,m,br,n,s,t,a,b);


}
