#include<iostream>
using namespace std;
 const  int m =3 ;
 const int  n= 3 ;

void display(int board[m][n])
{
	for(int i=0;i<3;i++) {
	for(int j=0;j<3;j++)
		{cout<<board[i][j]<<"  || ";}cout<<endl; }

}


int main()
{
	int board[][3]={  {0,1,2}, {3,4,5}, {6,7,8}  };

     display(board);



}
