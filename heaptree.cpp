#include<iostream>
#include<vector>
using namespace std;

class  heap{

private:
	vector<int>v;
public:

	heap()
	{v.push_back(-1);}

	void push(int d)
	{
		v.push_back(d);
		int i=v.size()-1;
		while(i>1 && v[i]<v[i/2])
		{
			swap(v[i],v[i/2]);
			i=i/2;
		}

	}

	int first()
	{
		int i=v.size();
		if(i<=1) return -1;
		return v[1] ;
	}


	bool empty()
	{
		int i=v.size();
		if(i<=1) return false;
		return true;
	}
	void heapify(int d)
	{
		if(d==v.size()-1) return;
		int minid=d;
		if(2*d<v.size() && v[minid]>v[2*d]) minid=2*d;
		if(2*d+1<v.size() && v[minid]>v[2*d+1]) minid=2*d+1;
		if(minid!=d)
		{
			swap(v[minid],v[d]) ;
			heapify(minid);
		}
	}
	void pop()
	{
		int i=v.size()-1;
		//if(i<=1) return;
		swap(v[1],v[i]);
		v.pop_back();
		heapify(1);
	}

};



int main()
{
	heap h;
	h.push(5);
	h.push(15);
	h.push(2);
    h.push(20);
	h.push(3);
	//h.push(1);

	while (h.empty()==true){
        cout<<h.first()<<endl;
        h.pop();
    }

  // cout<<h.first()<<endl;
   //cout<<h.empty();
}
