#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    while(true)
    {
        cin>>ch;
        if(ch=='*')
        {
            cin>>a>>b;
            cout<<a*b<<endl;
        }


        else if(ch=='/')
        {
            cin>>a>>b;
            cout<<a/b<<endl;
        }


        else if(ch=='+')
        {
            cin>>a>>b;
            cout<<a+b<<endl;
        }

        else if(ch=='-')
        {
            cin>>a>>b;
               cout<<a-b<<endl;
        }

        else if(ch=='%')
        {
            cin>>a>>b;
            cout<<a%b<<endl;
        }


        else if(ch=='X'|| ch=='x')
            return 0;

        else
            {cout<<"Invalid operation. Try again"<<endl;
            continue;}

    }

}
