#include<iostream>
#include<algorithm>
using namespace std;

int tod(int a[],int l,int n)
{
    int pivot=a[l];
    int i=l,j=n;

    while(i<j){
    while(pivot>=a[i]) i++;
    while(pivot<a[j]) j--;
    if(i<j) swap(a[i],a[j]);
    }
     swap(a[l],a[j]);

   return j;


}
void quicksort(int a[],int l,int n)
{

    if(l<n)
    {
       int j=tod(a,0,n) ;
       quicksort(a,0,j-1);
       quicksort(a,j+1,n);
    }
}

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
   // int temp[n]={0};
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i];
}



