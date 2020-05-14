#include<iostream>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int c=0,d=0,e=0;
        string s;
        cin>>s;
        for(int j=0; s[j]!='\0'; j++)
        {
            if(c==10 && d==10)
            {
                e++;
                c=0;
                d=0;
            }
            if(s[j]=='1')
            {
                c++;
                if(c==11 || (e>0 && c==2))  {
                    cout<<"WIN"<<endl; break; }
            }
            else
            {
                d++;
                if(d==11 || (e>0 && d==2))
                   { cout<<"LOSE"<<endl; break; }
            }
        }

    }


}

