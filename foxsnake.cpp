#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if( i%2==0 ){
              cout<<"#"; }
           else if(i%2!=0)
           {
               if(j==m-1 && c==0) {cout<<"#";c=1;d=1; }
               else if(j==0 && c==1){cout<<"#";d=0;}
               else cout<<".";
           }

        }
          if(d==0) c=0;
        cout<<endl;
    }
}
