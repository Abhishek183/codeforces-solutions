#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {k='1';
        for(j=1;j<=9;j++)
          {//k=j;
             // for(k=j;k<+i;k++)
          //{

            if(j>=6-i && j<=4+i && k )
           {
               printf("%d",k);
               k--;
              //k=k+2;
           }
            else
          {
              printf(" ");//}
              k++;}
    }printf("\n");
    }
}
