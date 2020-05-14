#include<iostream>
using namespace std;
int sum(int arr[],int n)
{  int ans=0;
    if(n==0) return 0;
    ans=arr[0]+ sum(arr+1,n-1);
     return ans;
}







int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    cout<<sum(arr,n);
}
