#include<iostream>
using namespace std;
#include<string>

void print(string s)
{
	for(int i=0;i<s.size();i++) cout<<s[i];
}

int main()
{
	int c=0,d=0;
	string s1,s2[102];
	cin>>s1;
	if(s1.size()==1)
        {if(islower(s1[0]))
              {s2[0]=s1[0]-32;cout<<s2[0];}
        else
        { s2[0]=s1[0]+32;cout<<s2[0];}
            }

	else{

		for(int i=0;s1[i]!='\0';i++)
		{
			if(islower(s1[i])) c++;
			else d++;
		}
		  if(c==0)
		    {
			for(int i=0;s1[i]!='\0';i++) {s2[i]=s1[i]+32; cout<<s2[i];}


		    }
		  else if( c==1 && islower(s1[0]) )
		    {

			for(int i=0;s1[i]!='\0';i++)
			   { if(i==0)
			       s1[0]=s1[0]-32;
			     else s1[i]=s1[i]+32;
			   }
		       print(s1);
		    }
		  else print(s1);

	}


}
