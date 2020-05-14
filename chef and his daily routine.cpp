#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string str;
        cin>>str;
        int c=0;
        int len=str.length();
        //cout<<len;

        for(int j=0; j<len-1; j++)
        {
			if(str[j]=='E' && (str[j+1]=='C' )){c++; break;}
			else if(str[j]=='S' && (str[j+1]=='E' || str[j+1]=='C' )){c++; break;}
        }
        if(c>0) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
}
