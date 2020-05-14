#include<stdio.h>
 int main()
{
    int n;
  scanf("%d",&n);
 int i,j,k,mat[n][3],c=0;
 for(i=0;i<n;i++)
 {
     for(j=0;j<3;j++)
     {
     scanf("%d",&mat[i][j]);
 }}
  for(i=0;i<n;i++)
 {
     for(j=0;j<1;j++)
     {
       if((mat[i][j] + mat[i][j+1]+ mat[i][j+2])>=2)
       {c++;
       }
 }}
 printf("%d",c);
}

