#include <bits/stdc++.h>
using namespace std;

int main()
{long long n,m;
scanf("%lld%lld",&n,&m);

if(n%2!=0)
    n++;

if((m-n)<2)
    printf("%d",-1);
else
    printf("%lld %lld %lld",n,n+1,n+2);


return 0;
}
