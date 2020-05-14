#include<iostream>
using namespace std;
#define n 4
#define m 5

void ratinm(char maze[n][m],int xpos,int ypos,int &cnt)
{
    if(xpos==n-1 && ypos==m-1) {cnt++; return;}
    if(maze[xpos+1][ypos]!='X' && xpos+1<=m-1)
        ratinm(maze,xpos+1,ypos,cnt);
    if(maze[xpos][ypos+1]!='X' && ypos<=n-1)
        ratinm(maze,xpos,ypos+1,cnt);
}








int main(){
    char maze[n][m]={{'0','0','0','X','0'},
                     {'0','X','0','0','0'},
                     {'0','0','X','0','X'},
                     {'0','0','0','0','0'}};
    int cnt=0;
    ratinm(maze,0,0,cnt);
    cout<<cnt<<endl;
}
