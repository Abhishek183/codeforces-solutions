#include<iostream>
using namespace std;
int main()
{

	int t;cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;cin>>a>>b;
	    char col[2*max(a,b)+1]={};

	    for(int j=0;j<2*max(a,b);j++)
		{
			if(j==0) col[j]='w';
			else if(j-b=='w'  || j-a=='w'  ) col[j]='w';
			else col[j]='b';
		}
		int flg=1;
        for(int j=0;j<2*max(a,b)-1;j++)
		{   cout<<col[j];
			if(col[j]==col[j+1]=='w') {flg=0;break;}
		}
		if(flg==0) cout<<"Finite"<<endl;
		else if(flg==1 || a%10==0 && b%10==0) cout<<"Infinite"<<endl;

}
}
