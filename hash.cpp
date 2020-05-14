#include<iostream>
using namespace std;

class hashnode{
private:
	string key;
	int data;
	hashnode*next;
public:
	hashnode(string s,int d) {
	string key =s;
	int data=d;
	hashnode*next=NULL;
	}
	friend class hash ;
}
class hash()
{
 private:

 		hashnode**room;
 		int ts;
 		int count;

	int HashValue(string k){
        int ans=0; int pv=1;
        for (int i=k.length()-1;i>=0;i--){
            ans=(ans+k[i]*pv)%roomSize;
            pv=(pv*37)%roomSize;
        }
        ans=ans%roomSize;
        return ans;
    }


 public:
 	hash(int s=3)
 	{
 		int ts=3;
 		int count=0;
 		for(int i=0;i<ts;i++) rooms[i]=NULL;
 	}

 	void insert(string s,int d)
 	{
 		int hv=hashvalue(k);
 		hashnode*n=new hashnode(k,d);
 		n->next=rooms[hv];
 		rooms[hv]=n;
 		count  ++;
 	}










};





};




int main()
{

}
