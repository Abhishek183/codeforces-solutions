#include<iostream>
using namespace std;

 int box[40001]={0};
int ans(int a,int b,int c)
{
  if(box[a]!=0) return box[a];

	if(b==a) {return 0;}

     if(a<0)  return 10000000;
	int ans1=+10000000,ans2=+10000000,ans3=+10000000,ans6=+10000000
	,ans5=+10000000,ans4=+10000000;
          cout<<"h";
	if(a-5>=0 ) ans1=ans(a-5,b,c);
	if(a-2>=0 ) ans2=ans(a-2,b,c);
	if(a-1>=0 ) ans3=ans(a-1,b,c);
	if(a+1>=0 ) ans4=ans(a+1,b,c);
	if(a+2>=0 ) ans5=ans(a+2,b,c);
	if(a+5>=0 ) ans6=ans(a+5,b,c);


	int finalans= 1+min(ans1,min(ans2,min(ans3,min(ans4,min(ans5,ans6)))));
       box[a]=finalans;
       cout<<finalans;
	   return box[a];

}






int main()
{
	int t;cin>>t;
	for(int i=0;i<t;i++)
	{    int a,b;
		cin>>a>>b;
		cout<<ans(a,b,0)<<endl;
	}
}

