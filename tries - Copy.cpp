#include<iostream>
#include<unordered_map>
using namespace std;
 #define hashmap unordered_map<char,node*>

 class node{
private:
   char ch;
   hashmap h;
   bool isterminal;
public:
	node(char d)
	{
		ch=d;
		isterminal=false;
	}
	friend class trie;
 };

class trie{

private:
	 node*root;
public:
	trie() {
	root=new node('\0'); }

void AddWord(char word[])
    {
    	node*temp=root;

	  	for(auto i=0;word[i]!='\0';i++)
		{   char ch=word[i];
			if(temp->h.count(ch)==0)
			{
				node*child=new node(ch);
				temp->h[ch]=child;
				temp=child;
			}
			else
			{ temp=temp->h[ch]; }

		}
		temp->isterminal=true;
    }

    bool Search(char word[])
    {     // cout<<"h";
    	node*temp=root ;
    	for(auto i=0;word[i]!='\0';i++)
		{     char ch=word[i];
			if(temp->h.count(ch)==0) return false;
			else
			{
				temp=temp->h[ch];
			}
		}
	     return temp->isterminal;
    }

    } ;


int main(){
    trie T;
    char str1[]="car";
    T.AddWord(str1);
    char str2[]="cat";
    T.AddWord(str2);
    char str3[]="bat";
    T.AddWord(str3);
    char str4[]="care";
    T.AddWord(str4);
    char str5[]="carrot";
    T.AddWord(str5);
    char str6[]="bar";
    T.AddWord(str6);
	cout<<T.Search("car")<<endl;
    cout<<T.Search("carrot")<<endl;
    cout<<T.Search("ca")<<endl;
    cout<<T.Search("bar")<<endl;
}
