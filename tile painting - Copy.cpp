#include<iostream>
using namespace std;
#define ll long long

bool isprime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main()
{
	ll int n;cin>>n;


	if(isprime(n)) cout<<n;

	else{ll int c=0;
	for(ll int i=1;i<=n;i++)
	{
		for(ll int j=i+2;j<=n;j++)
		{
			if(n%abs(i-j)==0 && abs(i-j)>1)
				c++;
		}
	}
	cout<<c; }

}
