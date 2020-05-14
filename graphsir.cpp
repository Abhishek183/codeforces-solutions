#include<iostream>
#include<list>
#include<queue>
using namespace std;

class Graph{
private:
    int V;
    list<int>* ll;
public:
    Graph(int s){
        V=s;
        ll=new list<int>[V];
    }
    void addEdge(int s, int d, bool isBiDir=false){
        ll[s].push_back(d);
        if (isBiDir) ll[d].push_back(s);
    }
    void Print(){
        for (int i=0;i<V;i++){
            cout<<i<<":";
            for (auto it=ll[i].begin(); it!=ll[i].end();it++){
                cout<<*it<<" ";
            }
            cout<<endl;
        }
    }
    void BFS(int s){
        bool Visited[V];
        for (int i=0;i<V;i++) Visited[i]=false;
        queue<int> q;
        q.push(s);
        Visited[s]=true;
        while (!q.empty()){
            int f=q.front();
            q.pop();
            cout<<f<<" ";
            for (auto it=ll[f].begin();it!=ll[f].end();it++){
                if (!Visited[*it]){
                    q.push(*it);
                    Visited[*it]=true;
                }
            }
        }
        cout<<endl;
    }
    void BFSPath(int s, int d){
        int Parents[V];
        int Distance[V];
        for (int i=0;i<V;i++){
            Parents[i]=-1;
            Distance[i]=-1;
        }
        queue<int> q;
        q.push(s);
        Distance[s]=0;
        while (!q.empty()){
            int f=q.front();
            q.pop();
            for (auto it=ll[f].begin();it!=ll[f].end();it++){
                if (Distance[*it]==-1){
                    q.push(*it);
                    Parents[*it]=f;
                    Distance[*it]=Distance[f]+1;
                }
            }
        }
        cout<<"Shortest distance="<<Distance[d]<<endl;
        cout<<"Path-"<<d;
        int t=Parents[d];
        while (t!=-1){
            cout<<"<-"<<t;
            t=Parents[t];
        }
        cout<<endl;
    }

    void DFS(int s, bool Visited[]){
        cout<<s<<" ";
        Visited[s]=true;
        for (auto it=ll[s].begin();it!=ll[s].end();it++){
            if (!Visited[*it]){
                DFS(*it,Visited);
            }
        }
    }

    void DFS(int s){
        bool Visited[V];
        for (int i=0;i<V;i++) Visited[i]=false;
        DFS(s,Visited);
        cout<<endl;
    }
};

int main(){
   /* Graph SL(101);
    SL.addEdge(0,1);
    int board[101];
    for (int i=0;i<=100;i++){
        board[i]=i;
    }
    board[2]=55;
    board[56]=35;
    board[37]=100;

    for (int i=1;i<=99;i++){
        for (int j=1;j<=6;j++){
            int dest=i+j;
            if (dest<=100){
                SL.addEdge(i,board[dest]);
            }
        }
    }

    SL.BFSPath(1,100);

    /*Graph SL(37);
    SL.addEdge(0,1);
    int board[37];
    for (int i=0;i<=36;i++){
        board[i]=i;
    }
    board[2]=15;
    board[5]=7;
    board[9]=27;
    board[18]=29;
    board[25]=35;
    board[34]=12;
    board[32]=30;
    board[24]=16;
    board[17]=4;
    board[20]=6;

    for (int i=1;i<=35;i++){
        for (int j=1;j<=6;j++){
            int dest=i+j;
            if (dest<=36){
                SL.addEdge(i,board[dest]);
            }
        }
    }

    SL.BFSPath(1,36);*/

   // return 0;
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
    G.Print();
    G.BFS(0);
    G.BFSPath(3,7);
   // G.DFS(0);
}

