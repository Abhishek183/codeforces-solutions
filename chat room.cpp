#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   string str1; cin>>str1;
   string str2="hello";
      int j=0;
    for(int i=0;str1[i]!='\0';i++)
	{
		if(str2[j]==str1[i]) j++;
	}
	if(j==5) cout<<"YES";
	else cout<<"NO";

}
