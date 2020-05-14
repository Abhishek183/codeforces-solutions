#include<iostream>
using namespace std;
class complex
{
public:
    int real=0,imag=0;
    int add(int,int);
    void show()
    {
        cout<<real<<"+"<<"i"<<imag;
    }
};
    int complex::add(int x,int y)
    {
        real=real+x;
        imag=imag+y;
    }
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    complex o;
    o.add(a,b);
    o.add(c,d);
    o.show();
}
