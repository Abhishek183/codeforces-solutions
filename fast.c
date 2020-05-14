#include<stdio.h>
#include<conio.h>
main()
{
    char str1[100],str2[100];
    int i,n;
    printf("%s%s",str1,str2);
    n=strlen(str1);
    for(i=0;i<=n;i++)
    {
        if(str1[i]==1 && str2[i]==1)
            printf("0");
        else if(str1==1 && str2==0)
            printf("1");
        else if(str1==0 && str2==1)
             printf("1");
        else
             printf("0");

    }
}
