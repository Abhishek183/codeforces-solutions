#include<bits/stdc++.h>
using namespace std;
int sum,n;
string s;
int main()
{
    cin>>n;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            sum++;
        else
            sum--;
    }
    cout<<abs(sum);
    return 0;
}
