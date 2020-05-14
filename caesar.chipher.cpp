#include<iostream>
using namespace std;
#include<string>
int main()
{

 int n;
 cin>>n;
 string s;
cin>>s;
int k;
cin>>k;

for(int i=0;i<n;i++)
{

  if(isupper(s[i]) )
  {
    cout<<char((((int(s[i])+k)-65)%26)+65);



  }
  else if(islower(s[i]))
  {

	cout<<char((((int(s[i])+k)-97)%26)+97);

  }
  else cout<<s[i];



}





}
