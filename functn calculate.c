#include<stdio.h>
#include<math.h>
main()
{

    long long int n,sum=0 ;
    scanf("%lld",&n);
   if(n%2==0)
   {sum=n/2;
      printf("%lld",sum);}
    else
       {
        sum=-ceil((n/2)+1);
    printf("%lld",sum);}

}
