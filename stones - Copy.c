#include<stdio.h>
main()
{
 int i,n,c=0;
 scanf("%d",&n);
 char str[n];
 scanf("%s",&str);
 for(i=1;i<=n-1;i=i+1)
 {
     if(str[i-1]==str[i])
     {
         c++;
     }
 }printf("%d\n",c);

}
