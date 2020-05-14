#include<iostream>
using namespace std;
int main()
{
    int i,j,c=1;
    int m=4,n=4;
    int a[m][n]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}};

 for(i=0;i<4;i++)
 { if(c%2!=0)
     {for(j=0;j<4;j++)
     {
         cout<<a[i][j]<<endl;
     }}
   else
    {for(j=3;j>-1;j--)
     {
         cout<<a[i][j]<<endl;
     }}
        c++;
 }

 }

