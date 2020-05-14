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
typedef pair<pair<TreeNode*,int>,int> pnii;

class MyOut{
public:
    TreeNode* node;
    int sum;

    MyOut(){
        node=NULL;
        sum=0;
    }
};

class GenericTree{
private:
    TreeNode* root;
public:
    GenericTree(){
        root=NULL;
    }

    TreeNode* FillPreOrderRec(){
        ///no base case required as we are calling as per requirement
        cout<<"Enter data:";
        int d; cin>>d;
        TreeNode* n =new TreeNode(d);
        cout<<"Enter no of child for Node#"<<d<<":";
        int c; cin>>c;
        if (c==0) return n;
        n->childcount=c;
        n->children=new TreeNode*[c];
        for (int i=0;i<c;i++){
            n->children[i]=FillPreOrderRec();
        }
        return n;
    }
    void FillPreOrder(){
        root=FillPreOrderRec();
        cout<<endl;
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

    void PrintPostOrder(TreeNode* rt){
        if (rt==NULL) return;
        for (int i=0;i<rt->childcount;i++){
            PrintPostOrder(rt->children[i]);
        }
        cout<<rt->data<<" ";
   }

    void PrintPostOrder(){
        cout<<"PostOrder:";
        PrintPostOrder(root);
        cout<<endl;
    }

    void PrintLevelOrder(){
        if (root==NULL) return;
        cout<<"Level Order:"<<endl;
        queue<TreeNode*> q;
        q.push(root);q.push(NULL);
        while (!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            if (f==NULL){
                cout<<endl;
                if (!q.empty()) q.push(NULL);
            } else {
                cout<<f->data<<" ";
                for (int i=0;i<f->childcount;i++)
                    q.push(f->children[i]);
            }
        }
        cout<<endl;
    }

    void MaxData(TreeNode* rt, TreeNode* &Max){
        if (rt==NULL) return;
        if (Max==NULL || rt->data>Max->data) {
            Max=rt;
        }
        for (int i=0;i<rt->childcount;i++){
            MaxData(rt->children[i],Max);
        }
    }

    TreeNode* MaxData(TreeNode* rt){
        if (rt==NULL || rt->childcount==0) return rt;
        TreeNode* Max=rt;
        for (int i=0;i<rt->childcount;i++){
            TreeNode* ans=MaxData(rt->children[i]);
            if (ans->data>Max->data) Max=ans;
        }
        return Max;
    }

    int MaxData(){
        ///Brute Force Approach
        TreeNode* Max=NULL;
        /*MaxData(root,Max);
        if (Max!=NULL) return Max->data; else return -1;*/
        ///Greedy Algo
        Max=MaxData(root);
        if (Max!=NULL) return Max->data; else return -1;
    }

    int Depth(TreeNode* rt, int k, int lvl){
        if (rt==NULL) return -1;
        if (rt->data==k) return lvl;
        for (int i=0;i<rt->childcount;i++){
            int ans=Depth(rt->children[i],k,lvl+1);
            if (ans!=-1) return ans;
        }
        return -1;
    }

    int Depth(TreeNode* rt, int k){
        if (rt==NULL) return -1;
        if (rt->data==k) return 0;
        for (int i=0;i<rt->childcount;i++){
            int ans=Depth(rt->children[i],k);
            if (ans!=-1) return ans+1;
        }
        return -1;
    }

    int Depth(int k){
        return Depth(root, k,0);
        //return Depth(root,k);
    }

    int Height(TreeNode*rt){
        if (rt==NULL) return -1;
        int MaxChildHeight=-1;
        for (int i=0;i<rt->childcount;i++){
            int ans=Height(rt->children[i]);
            if (ans>MaxChildHeight) MaxChildHeight=ans;
        }
        return MaxChildHeight+1;
    }
    int Height(){
        return Height(root);
    }

    MyOut MaxSumNucTree(TreeNode *rt){
        MyOut ans;
        if (rt==NULL) return ans;
        int sum=rt->data;
        for (int i=0;i<rt->childcount;i++) sum+=rt->children[i]->data;
        ans.node=rt;
        ans.sum=sum;
        for (int i=0;i<rt->childcount;i++){
            MyOut cans=MaxSumNucTree(rt->children[i]);
            if (cans.sum>ans.sum){
                ans.sum=cans.sum;
                ans.node=cans.node;
            }
        }
        return ans;
    }

    int MaxSumNucTree(){
        MyOut ans=MaxSumNucTree(root);
        return ans.node->data;
    }

    pnii MaxSumSubTree(TreeNode* rt){
        pnii ans;
        ans.first.first=NULL;
        if (rt==NULL) return ans;
        int rtKAsum=rt->data;
        ans.first.second=INT_MIN;
        for (int i=0;i<rt->childcount;i++){
            pnii cans=MaxSumSubTree(rt->children[i]);
            rtKAsum+=cans.second;
            if (cans.first.second>ans.first.second){
                ans.first.first=cans.first.first;
                ans.first.second=cans.first.second;
            }
        }
        if (rtKAsum>ans.first.second){
            ans.first.first=rt;
            ans.first.second=rtKAsum;
        }
        ans.second=rtKAsum;
        return ans;
    }
    int MaxSumSubTree(){
        pnii ans=MaxSumSubTree(root);
        if(ans.first.first==NULL) return -1;
        else return ans.first.first->data;
    }
};


int main(){
    GenericTree gt;
    gt.FillPreOrder();
    gt.PrintPreOrder();
    gt.PrintPostOrder();
    gt.PrintLevelOrder();
    cout<<"Max Data:"<<gt.MaxData()<<endl;
    cout<<"Depth of 7:"<<gt.Depth(7)<<endl;
    cout<<"Height of Tree:"<<gt.Height()<<endl;
    cout<<"Max Nuc Family Sum Node:"<<gt.MaxSumNucTree()<<endl;
    cout<<"Max Sum Sub Tree Node:"<<gt.MaxSumSubTree()<<endl;

}

///PO 1 3 2 2 5 2 9 0 10 0 6 0 3 0 4 2 7 2 11 0 12 0 8 0
