#include<iostream>
using namespace std;
int main()
{
    int lrow=4-1,lcol=4-1,l=0,k=0,i;
    int a[4][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}};
      k=0;
    while(l<=lcol && k<=lrow)
    {
        for(i=l;i<=lcol;i++)
        {
            cout<<a[k][i]<<" ";
        }k++;


        for(i=k;i<=lrow;i++)
        {
            cout<<a[i][lcol]<<" ";;
        }lcol--;

        if(l<=lcol)
        {
          for(i=lcol;i>=l;i--)
           {cout<<a[lrow][i]<<" ";}
        lrow--;
        }
        if(k<=lrow)
        {
          for(i=lrow;i>=k;i--)
           {cout<<a[i][l]<<" ";}
         l++;
        }

    }

}
