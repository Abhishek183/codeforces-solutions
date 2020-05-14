#include<stdio.h>
main()
{
int x=0,i,n;
char a[4];

scanf("%d",&n);
for(i=1;i<=n;i++)
{
    scanf("%s",&a);
    if(a[1]=='+')
      {x=x+1;
      }
    else
    {
       x=x-1;}
}
printf("the value of x %d\n" ,x);
}
