#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
     int sum=0,cnt=0;
 while(s.size()>1) {

    sum=0;
	for(int i=0;s[i]!='\0';i++)
	{
		int x=(int)s[i];
		int no=x-48;
		sum+=no;
       // s2+=(char)no;
        //s2+=char(48+no);
	}
	 string s2="";
	while(sum!=0)
	{
		s2+=(char)((sum%10)+48);
		sum=sum/10;
	}
	s=s2;
	cnt++;
}
cout<<cnt;


}
