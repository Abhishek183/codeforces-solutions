#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,c=0,p;

    scanf("%d",&n);
    int a[n];
     for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=1;i<=n;i++)
      { p=4-a[i];
        if(p==0)
        {
         c++;}
        else
          {
            for(j=2;j<=n;j++)
        {
            if(p==a[j])
               {
               c=c;
               a[j]==a[i+1];}
            else
                {c++;}
        }}
        }
        printf("%d",c);

}
