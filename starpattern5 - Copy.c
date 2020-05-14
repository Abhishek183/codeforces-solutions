#include<stdio.h>
main()
{
int i,j,k,L;
//char A;
for(i=1;i<=4;i++)
{ k='A';
  L='1';
    for(j=1;j<=8;j++)
        {
            if(j>=5-i && j<=4+i)
                { if(j<=4)
                   {
                       printf("%c",k);
                       k++;}
                  else
                    {printf("%c",L);
                     L++; }}
            else
                printf(" ");
        }
        printf("\n");
    }
}
