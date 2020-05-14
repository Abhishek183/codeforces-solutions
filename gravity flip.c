#include<stdio.h>
main()
{
    int n,i,j,t=0;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
     if(a[j]>=a[j+1])
     { t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
     }}}
     for(j=0;j<n;j++)
    {
        printf("%d  ",a[j]);
    }
}
