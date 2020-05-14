#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<int> v;
void intersection(map<int,int> m1 , int v2[])
{

	for(int i=0;i<4;i++)
	{
		if(m1.find(v2[i])) {  v.push_back(v2[i]) ; }
	}

}


int main()
{
	map<int,int> m1;
	int v1[6],v2[4]  ;
    for(int i=0;i<6;i++){cin>>v1[i] ;  }
    for(int i=0;i<4;i++){cin>>v2[i] ;  }
	for(int i=0;i<6;i++)
	{   int n;    cin>>n;
		m1.insert(pair<int,int>(i,v[i])) ;
	}

	instersection(m1,v2);

	for(auto i=v.begin() ; i<v.end();i++)
	{
		cout<<v[i];
	}
}


