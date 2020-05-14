#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int n; cin>>n;
	cin.ignore()   ;

	for(int i=0;i<n; i++)
	{
		 int c=0;
		string s,wrd;
		getline(cin,s);

		stringstream str(s);
		while(str>>wrd) {
		  if(wrd=="not")
		     {c++;}
	    }

		if(c>0) cout<<"Real Fancy"<<endl;
		else cout<<"regularly fancy"<<endl;

	}
}
