#include<stdio.h>
main()
{
    int a,b,c,ctr=0,p;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        {
            ctr=(a+(b*c));
              p=ctr;
            if(ctr<a*b*c)
                p=a*b*c;
                ctr=p;
            if(ctr<a*(b+c))
                p=a*(b+c);
                ctr=p;
            if(ctr<(a+b+c))
                p=a+b+c;
                ctr=p;
            if(ctr<(a+b)*c)
                p=(a+b)*c;
                ctr=p;
        }
        printf("%d",p);

        }


