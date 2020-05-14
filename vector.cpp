#include<iostream>
#include<vector>
using namespace std;
int main()
{   int i;
    vector<int>v1{10,20,30};
    cout<<v1.at(2)<<endl;
    cout<<v1.size()<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.front();
    vector<int>v3(5,10);
     cout<<v3.capacity()<<endl;
    v3.push_back(20);
    for(i=0;i<v3.size();i++)
    {
    cout<<v3.at(i)<<endl;
    }


    cout<<v3.capacity();
}

