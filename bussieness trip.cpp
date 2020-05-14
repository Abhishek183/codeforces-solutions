#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

	int k,c=0,sum=0;
	cin>>k;
	int a[13];
	for(int i=1;i<13;i++) cin>>a[i];

	sort(a,a+13,greater<int>());

	int i=1;

	while(sum<k && i<13)
	{
		sum+=a[i];

		i++;
		//c++;
	}



	if(i==13 && sum<k) cout<<-1;
	else cout<<i-1;






}
