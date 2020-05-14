#include <iostream>
using namespace std;

int comp(int a,int b)
{
    if(a>b)
    {
        return 1;
    }
    if(a==b)
    {
        return 2;
    }
    if(a<b)
    {
        return 3;
    }
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int ages[3];
	    int money[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>ages[i];
	    }
	    for(int i=0;i<3;i++)
	    {
	        cin>>money[i];
	    }
	    if(comp(ages[0],ages[1])==comp(money[0],money[1]) && comp(ages[1],ages[2])==comp(money[1],money[2])&&comp(ages[0],ages[2])==comp(money[0],money[2]))
	    {
	        cout<<"FAIR"<<endl;
	    }
	    else
	    {
	        cout<<"NOT FAIR"<<endl;
	    }
	}
	return 0;
}
