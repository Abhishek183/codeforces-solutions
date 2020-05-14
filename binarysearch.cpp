#include<iostream>
using namespace std;
 bool binarysearch(int a[],int s,int n,int k)
 {
 	if(s>n) return false;
 	int mid=s+n/2;
 	if(a[mid]==k) return true;
	if(k<a[mid]) bool ans=binarysearch(a,s,mid-1,k);
 	else  bool ans=binarysearch(a,mid+1,n,k);


 }
  int main()
  {
  	int n;
  	cin>>n;
  	int a[n];
  	for(int i=0;i<n;i++) cin>>a[i];
  	int k;cin>>k;
  	if(binarysearch(a,0,n-1,k)) cout<<true  ;
  	else cout<<false;
  }
