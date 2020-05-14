#include<iostream>
using namespace std;
void ans(string s,int i,int &d)
{
	 if(s[i]=='\0') return;

	if(s[i]!='W' || s[i+1]!='U' || s[i+2]!='B'){ cout<<s[i];
              d=d+1;  ans(s,i+1,d);}


	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
	while(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') i=i+3;
	if(d>0){cout<<" ";} ans(s,i,d);
	}


}




int main()
{
	string s;
	cin>>s;
	int flg=0;
	ans(s,0,flg);



}
