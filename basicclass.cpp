#include<iostream>
using namespace std;

class comple
{ public:
    int real,imag;
    void strp(int n)
    {
        real=n;
    }
    void stip(int n)
    {
        imag=n;
    }
    void add(comple c2)
    {
        real+=c2.real;
        imag+=c2.imag;
    }
    void print()
    {
        cout<<real;
        cout<<"+i";
        cout<<"("<<imag<<")";
    }
};

int main()
{   int a,b;
    comple c1,c2;
    cin>>a>>b;
    c1.strp(a);c1.stip(b);
     cin>>a>>b;
    c2.strp(a);c2.stip(b);
    //cin>>c1.real>>c1.imag;
   // cin>>c2.real>>c2.imag;
    c1.add(c2);
    c1.print();
}
