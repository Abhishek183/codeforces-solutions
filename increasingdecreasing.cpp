#include<iostream>
using namespace std;
int main()
{
    int n,prev,cur;
    cin>>n>>prev;
    int i=1,d=0,c=0;
    while(i<=n-1)
    { cin>>cur;
        if(cur>prev)
        {d++;

        }
        else
        { c++;

        }
        prev=cur;
        i++;
    }
          if(d==1 || d==n-1) cout<<"true";
          else cout<<"false";
}
