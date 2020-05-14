#include<iostream>
#include<queue>
#include<algorithm>
#include<math.h>
using namespace std;

class Node{
private:
    int data;
    Node* left, *right;
public:
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
    friend class BinaryTree;
};

typedef pair<pair<Node*,int>,int> pnii;
typedef pair<int,bool> p;

class BinaryTree{
private:
    Node * root;
public:
    BinaryTree(){root=NULL;}

    Node* TakeInputRec(){///private function
        int d,c;
        cout<<"Enter the data";
        cin>>d;
        if (d==-1) return NULL;
        Node*n=new Node(d);
        n->left=TakeInputRec();
        n->right=TakeInputRec();
        return n;
    }

    void TakeInput(){///public function
        root=TakeInputRec();
        cout<<endl;
    }

    void PrintPreOrder(Node* rt){
        if (rt==NULL) return;
        cout<<rt->data<<" ";
        PrintPreOrder(rt->left);
        PrintPreOrder(rt->right);
    }

    void PrintPreOrder(){///public function
        cout<<"PreOrder:";
        PrintPreOrder(root);
        cout<<endl;
    }
    void PrintPostOrder(Node* rt){
        if (rt==NULL) return;
        PrintPostOrder(rt->left);
        PrintPostOrder(rt->right);
        cout<<rt->data<<" ";
    }

   void PrintPostOrder(){///public function
        cout<<"PostOrder:";
        PrintPostOrder(root);
        cout<<endl;
    }

   void PrintInOrder(Node* rt){
        if (rt==NULL) return;
        PrintInOrder(rt->left);
        cout<<rt->data<<" ";
        PrintInOrder(rt->right);
    }

   void PrintInOrder(){///public function
        cout<<"InOrder:";
        PrintInOrder(root);
        cout<<endl;
    }

    Node* LevelOrderInput(){
        int d;
        cout<<"enter root data:";
        cin>>d;
        Node * n=new Node(d);

        queue<Node*> q;
        q.push(n);
        while (!q.empty()){
            Node* f=q.front();
            q.pop();
            cout<<"Enter data for left node for data-"<<f->data<<":";
            cin>>d;
            if (d!=-1) {
                f->left=new Node(d);
                q.push(f->left);
            }
            cout<<"Enter data for right node for data-"<<f->data<<":";
            cin>>d;
            if (d!=-1) {
                f->right=new Node(d);
                q.push(f->right);
            }
         }
        return n;
    }
    void TakeLOInput(){
        root=LevelOrderInput();
        cout<<endl;
    }

    void PrintLevelOrder(){
        if (root==NULL) return;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty()){
            Node* f=q.front();
            q.pop();
            if (f==NULL){
                cout<<endl;
                if (!q.empty()) q.push(NULL);
            } else{
                cout<<f->data<<" ";
                if (f->left!=NULL) q.push(f->left);
                if (f->right!=NULL) q.push(f->right);
           }
        }
        cout<<endl;
    }
    void PrintAllLeaves(Node* rt){
        if (rt==NULL) return;
        if (rt->left==NULL && rt->right==NULL){
            cout<<rt->data<<" ";
            return;
        }
        PrintAllLeaves(rt->left);
        PrintAllLeaves(rt->right);
    }
    void PrintAllLeaves(){
        cout<<"Leaves:";
        PrintAllLeaves(root);
        cout<<endl;
    }
    int Height(Node* rt){
        if (rt==NULL) return -1;
        return max(Height(rt->left),Height(rt->right))+1;
    }
    int Height(){
        return Height(root);
    }
    int Depth (Node* rt, int k, int d){
        if (rt==NULL) return -1;
        if (rt->data==k) return d;
        int ans=Depth(rt->left,k,d+1);
        if (ans!=-1) return ans;
        return Depth(rt->right,k,d+1);
    }
    int Depth(int k){
        return Depth(root,k,0);
    }

    Node* DeleteLeaves(Node* rt){
    }

    void DeleteLeaves(){
        root=DeleteLeaves(root);
        PrintLevelOrder();
    }

    void Duplicate(Node * rt){
    }

    void Duplicate(){
        Duplicate(root);
    }

    void Mirror(Node* rt){
        if (rt==NULL) return;
        swap(rt->left,rt->right);
        Mirror(rt->left);
        Mirror(rt->right);
    }
    void Mirror(){
        Mirror (root);
    }

    pnii Diameter (Node* rt){
        pnii ans;
        ans.first.first=NULL;
        ans.first.second=-1;
        ans.second=-1;
        if (rt==NULL) return ans;
        pnii lans=Diameter(rt->left);
        pnii rans=Diameter(rt->right);
        int mydia=lans.second+rans.second+2;
        ans.second=max(lans.second,rans.second)+1;
        if (mydia>=lans.first.second&& mydia>=rans.first.second){
            ans.first.first=rt;
            ans.first.second=mydia;
        } else if (lans.first.second>=rans.first.second){
            ans.first.second=lans.first.second;
            ans.first.first=lans.first.first;
        } else {
            ans.first.second=rans.first.second;
            ans.first.first=rans.first.first;
        }
        return ans;
    }

    void Diameter(){
        pnii ans=Diameter(root);
        cout<<"Max Dia ="<<ans.first.second<<" passing thru node#"
            <<ans.first.first->data<<endl;
    }

    Node* FillPreOrderInOrder(int po[],int ps,int pe,int io[],int is,int ie){
        if (ps>pe) return NULL;
        int rtdata=po[ps];
        Node* n=new Node(rtdata);
        int i;
        for(i=is;i<=ie;i++){
            if (io[i]==rtdata) break;
        }
        int LSTSize=i-is;
        n->left=FillPreOrderInOrder(po,ps+1,ps+LSTSize,io,is,i-1);
        n->right=FillPreOrderInOrder(po,ps+LSTSize+1,pe,io,i+1,ie);
        return n;
    }

    void FillPreOrderInOrder(){
        int preorder[]={1,2,4,8,9,5,10,3,7};
        int InOrder[]={8,4,9,2,5,10,1,3,7};
        int n=9;
        root=FillPreOrderInOrder(preorder,0,n-1,InOrder,0,n-1);
    }

    bool searchnode(Node*rt,int k)
    {
        if(rt==NULL) return false;
        if(rt->data==k) return true;
        bool ans=searchnode(rt->left,k);
        if(ans!=true)
        ans=searchnode(rt->right,k);
        else return true;

    }

    bool searchnode()
    { int d; cin>>d;
       return searchnode(root,d);
    }
    int sumofnode(Node*rt)
    {
        if(rt==NULL ) return 0;
        int sum=rt->data;
        int ans=sum+sumofnode(rt->left)+sumofnode(rt->right);
        return ans;
    }
    int sumde()
    {
        return sumofnode(root);
    }
    typedef pair<int,bool> p;

    p balanced(Node*rt)
    {
        p ans;

        ans.first=0;
        ans.second=true;
        if(rt==NULL) return ans;

        p lans=balanced(rt->left);
        p rans=balanced(rt->right);

        lans.first = Height(rt->left);
        rans.first = Height(rt->right);
        int value=abs(lans.first-rans.first);
        ans.first=max(lans.first,rans.first)+1;
        if(value<=1 && lans.second==true && rans.second==true)
        {ans.second=true;}
        else ans.second=false;
        return ans;


    }
    bool bal()
    {
         p answer=balanced(root);
         return answer.second;
    }
     void nosibling(Node*rt)
     {
         if(rt==NULL) return ;
         nosibling(rt->left);
         nosibling(rt->right);
         if(rt->left==NULL && rt->right!=NULL) cout<<rt->right->data;
         if(rt->left!=NULL && rt->right==NULL)  cout<<rt->left->data<<endl;


     }


      void nosiblings()
    {
        nosibling(root);
    }
    void removleaves(Node*rt,int k)
    {
        if(rt==NULL) return;

        cout<<rt->data<<" ";
        if(rt->data==k) return;

        else{
        removleaves(rt->left,k);
        removleaves(rt->right,k);}
    }
    void removleaves()
    {
        int k;cin>>k;
        removleaves(root,k);
    }
    Node* preorderinorder(Node*pre,int &psp,int pep,Node*ino,int isp,int iep)
    { if(psp==iep) return;
      Node*left=preorderinorder(pre,psp, pep,ino, isp, n/2);
      Node*rightt=preorderinorder(pre,psp, pep,ino, n/2+1,n-1);
        psp=psp+1;

    }
    void preorderinorder()
    { int n=9;
        pre[n]=TakeInput();
        ino[n]=TakeInput();
        int sp=0;
        preorderinorder(pre,sp,n-1,ino,0,n-1);
        cout<<left->data;

    }



};


int main(){
    BinaryTree T;
    T.TakeInput();
    ///T.TakeLOInput();
    //T.FillPreOrderInOrder();
    T.PrintPreOrder();
    T.PrintInOrder();
    T.PrintPostOrder();
   /*`++


    T.PrintLevelOrder();
    cout<<"Height:"<<T.Height()<<endl;
    cout<<"Depth:"<<T.Depth(5)<<endl;
    T.PrintAllLeaves();
    ///T.DeleteLeaves();*/
    //T.Mirror();
    ///T.PrintLevelOrder();
    //T.Diameter();
    //cout<<T.searchnode();

     //T.PrintPreOrder();
    // cout<<T.sumde();
    //cout<<T.bal();
    //T.nosiblings();
    //T.removleaves();
    T.preorderinorder();

}
//1 2 4 -1 -1 5 -1 8 -1 -1 3 6 9-1 -1 -1 7 -1 -1
//1 2 4 -1 -1 5 -1 8 -1 -1 -1
