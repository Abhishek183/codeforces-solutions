#include <iostream>
using namespace std;
#include<vector>


int fiboser(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fiboser(n-1)+fiboser(n-2);
}

void nikal(int d[],int n,int e[],int new_n)
{     int j=1;
  for(int i=1;i<=n;i++)
  {
  	if(i%2==0) {e[j]=d[i]; j++;}
  }
       d[new_n]={0};

    for(int i=1;i<=new_n;i++) {d[i]=e[i];  }

}


int main()
{   int t;cin>>t;
 while(t>0){
    int n;
    cin>>n;
    int array[n+1];

    for(int i=1; i<=n; i++)
    {
        array[i]=fiboser(i-1);
    }

    int d[n+1];
    for(int i=1; i<=n; i++)
    {
        d[i]=array[i]%10;
    }

    int new_n;
    if(n%2==0)
        new_n=n/2;
    else
        new_n=n/2 +1;


    int e[new_n];
    while(new_n!=2)  {


	nikal(d,n,e,new_n);

	e[new_n]={0};
     if(new_n%2==2)
        new_n=new_n/2;
     else
        new_n=new_n/2 +1;

    }
    cout<<e[new_n];

 t--;}
}
