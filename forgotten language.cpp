#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,p;
        cin>>n>>p;
        string a[n];
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(int l=0; l<n; l++)
        {
            int c=0,d=0;
            for(int j=0; j<p; j++)
            {
                int klen;
                cin>>klen;
                for(int k=0; k<klen; k++)
                {    string s;
                    cin>>s;
                    if(a[l]==s)
                       {
                       	c++;
						break; }
                }
                if(c>0)
                {
                    cout<<"yes"<<" ";
                    d++;
                    break;
                }

            }
            if(d==0) cout<<"no"<<" ";

        }
    }
}
