#include<stdio.h>
#include<conio.h>
main()
{
    int n,p,q,i,j,k,l;
    scanf("%d",&n);
    scanf("%d",&p);
    scanf("%d",&q);

    int a[p],b[q],c=0;
    for(i=1;i<=p;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=q;i++)
    {
        scanf("%d",&b[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=p;k>=1;k--)
        {
            if(n-j==a[k])
              {
               p=0;
               break;
               }
            else
                p=1;
        }
        if(p==1)
        {
            for(l=q;l>=1;l--)
            {
                if(n-j==b[l])
                   {
                    p=2;
                    break;
                    }
                else
                    p=3;
            }
        }
    }

     if(p==2 || p==0)
        printf("I become the guy.%d");
     else
        printf("Oh, my keyboard!%d");
}
