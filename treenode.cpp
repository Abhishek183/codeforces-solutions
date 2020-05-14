#include<iostream>
#include<queue>
using namespace std;


class TreeNode{
private:
    int data;
    TreeNode** children;
    int childcount;
public:
    TreeNode(int d){
        data=d;
        children=NULL;
        childcount=0;
    }
    friend class GenericTree;
};
class GenericTree{
private:
    TreeNode* root;
public:
    GenericTree(){
        root=NULL;
    }


    TreeNode* preordermain()
    {
       cout<<"enterdata";
       int d;cin>>d;
       TreeNode* rt=new TreeNode(d);
       rt->data=d;
       cout<<" total no. of enter children count";
       int c;cin>>c;
       if(c==0) return rt;
       rt->childcount=c;
       rt->children=new TreeNode*[c];
       for(int i=0;i<c;i++)
       {
           rt->children[i]=preordermain();
       } return rt;
    }
    void preorder()
    {
        root=preordermain();
    }


    void PrintPreOrder(TreeNode* rt){
        if (rt==NULL) return;
        cout<<rt->data<<" ";
        for (int i=0;i<rt->childcount;i++){
            PrintPreOrder(rt->children[i]);
        }
    }

    void PrintPreOrder(){
        cout<<"PreOrder:";
        PrintPreOrder(root);
        cout<<endl;
    }
    int maxdata(TreeNode*temp)
    {
        if(temp==NULL || temp->children==NULL) return temp->data;
        int maxi=temp->data;
        for(int i=0;i<temp->childcount;i++)
        {      int ans=maxdata(temp->children[i]);
           if(maxi <  ans) maxi=ans;
        } return maxi;

    }
    int maxi()
    {
       return maxdata(root);
    }
    int level(TreeNode*rt,int k,int lvl)
    {   if(rt==NULL) return -1;

        if(rt->data==k) return lvl;
        for(int i=0;i<rt->childcount;i++)
        {

            int ans=level(rt->children[i],k,lvl+1);
            if(ans!=-1) return ans;

        }
        return -1;
    }
    int level()
    { int k;cin>>k;
       return level(root,k,0);
    }

    int height(TreeNode*rt)
    {
        //if(rt==NULL) return -1;
        int h=0;
        for(int i=0;i<rt->childcount;i++)
        {
            int ans=height(rt->children[i]);
            if(h<ans) h=ans;
        }
        return h+1;
    }

    int height()
    {
        return height(root);
    }
    int sum(TreeNode*rt)
    {
        if(rt==NULL) return 0;
        int sume=rt->data;
        //int ans=0;
        for(int i=0;i<rt->childcount;i++)
        {
            int ans=sum(rt->children[i]);
             sume=sume+ans;
        }
        return sume;
    }
    int sumofnode()
    {
        return sum(root);
    }
    int leaf(TreeNode*rt,int&l)
    {
        if(rt==NULL) return 0;
        //if(rt->children==NULL) return 1;
        if(rt->childcount==0) { l++;}
        for(int i=0;i<rt->childcount;i++)
        {
            leaf(rt->children[i],l);
        }return l;
    }
    int leafnode()
    {   int l=0;
        return leaf(root,l);
    }



};
int main()
{
    GenericTree gt;
    gt.preorder();
    gt.PrintPreOrder();
    cout<<gt.maxi();
    cout<<gt.level();
    cout<<gt.height();
    cout<<gt.sumofnode();
    cout<<gt.leafnode();
    //cout<<gt.nextlarge();
}//1 3 2 2 5 2 9 0 10 0 6 0 3 0 4 2 7 2 11 0 12 0 8 0

