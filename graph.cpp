#include<iostream>
#include<queue>
#include<list>
using namespace std;

class Graph{
 private:
 	int v;
 	list<int>* ll ;
 public:
	Graph(int s)
	{
		int v=s;
		ll=new list<int>[v];
	}

 void addEdge(int s,int d, bool bidirectional=false)
	{
	   ll[s].push_back(d);
	   if(bidirectional)  ll[d].push_back(s);
	}

void print()
{
	for(int i=0;i<v;i++)
	{
		cout<<i<<":";
		for(auto it=ll[i].begin(); it!=ll[i].end(); it++) { cout<<*it<<" ";   }

	cout<<endl; }
}
void bfs(int s)
{
	bool visited[v];
	for(int i=0;i<v;i++)  visited[i]=false;
	queue<int>q;
	q.push(s);
	visited[s]=true;
	while(!q.empty())
	{
		int f=q.front() ;
		q.pop();
		cout<<f<<" ";
		for(auto it=ll[f].begin() ; it!=ll[f].end() ; it++ )
		{
			if(!visited[*it])
			{
				q.push(*it);
				visited[*it]=true;
			}
		}
	}  cout<<endl;
}




};
int main()
{
	//graph G;

	Graph G(8);
    G.addEdge(0,1);
    G.addEdge(0,3);
    G.addEdge(0,2);
    G.addEdge(1,4);
    G.addEdge(3,4);
    G.addEdge(3,6);
    G.addEdge(3,5);
    G.addEdge(2,5);
    G.addEdge(4,7);
    G.addEdge(4,6);
    G.addEdge(5,6);
    G.addEdge(6,7);
	G.print();
	G.bfs(0);
}

