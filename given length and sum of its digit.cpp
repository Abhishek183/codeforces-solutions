#include<iostream>
using namespace std;

void nikal(int n,int s,int i,int sum,int j=0)
{
  if(sum==0 && i==n)
  {
  	cout<<j;
  }

  if(i==n && sum!=0) {sum+j;  return; }

  if(i<n) {
  for( j=0;j<=9;j++){
  	// cout<<j<<" "<<sum-j<<i<<endl;
	 nikal(n,s,i+1,sum-j,j);
  }
  }
  return;

  //return sum+j;


}

int main()
{
	int n,s;
	cin>>n>>s;
	nikal(n,s,0,s);
}
