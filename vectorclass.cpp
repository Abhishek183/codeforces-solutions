#include<iostream>
using namespace std;

class vectors{

private :
    int *arr;
    int arrsize;
    int length;
public:
    vectors(int siz=4)
    {
        arrsize=siz;
        length=0;
        arr=new int [arrsize];

    }
    void push(int n)
    {
        if(length==arrsize)
        {
            int *temp=arr;
            arr=new int[arrsize*2];
            for(int i=0;i<arrsize;i++) arr[i]=temp[i];
            arrsize*=2;
            delete [] temp;
        }
        arr[length]=n;
        length++;
    }
    void print()
    {
        for(int i=0;i<length;i++) cout<<arr[i]<<endl;
    }


};


int main()
{
    vectors v;
    for(int i=0;i<12;i++) v.push(10);
    v.print();


}
