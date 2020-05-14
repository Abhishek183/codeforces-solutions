#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s1,s2;

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
            s1.push(a[i]);
        else if(a[i]>s1.top())
            s1.push(a[i]);
        else
            s2.push(a[i]);



    }
    for(int i=0; i<n; i++)
    {

        if(i==n-a[0])
        {

            while(!s1.empty())
            {
                cout<<s1.top()<<" ";
                s1.pop();

            }
        }
        if(i==n-1)
        {

            while(!s2.empty())
            {
                cout<<s2.top()<<" ";
                s2.pop();

            }
        }
        else
            cout<<endl;
    }

}
