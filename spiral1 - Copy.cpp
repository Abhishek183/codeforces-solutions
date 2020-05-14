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

 for(j=0;j<4;j++)
 { if(c%2!=0)
     {for(i=0;i<4;i++)
     {
         cout<<a[i][j]<<endl;
     }}
   else
    {for(i=3;i>-1;i--)
     {
         cout<<a[i][j]<<endl;
     }}
        c++;
 }

 }

}
