#include<iostream>
using namespace std;

class Node{
private:
    int data;
    Node* next;
public:
    Node (int d){
        data=d;
        next=NULL;
    }
friend class LinkedList;
};

class LinkedList{
private:
    Node* head;
public:
    LinkedList(){
        head=NULL;
    }
   void InsertAtBegin(int d){
        Node* n=new Node(d);
        n->next=head;
        head=n;
    }
    void InsertAtEnd(int d){
        if (head==NULL){
            InsertAtBegin(d);
            return;
        }
        Node* n=new Node(d);
        Node* temp=head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }

        void duplicate(Node*hd)
         {
             if(hd==NULL) return ;
             while(hd->next!=NULL && (hd->data==hd->next->data))
             {

                     hd->next=hd->next->next;
             }
             duplicate(hd->next);
         }
         void dupli()
         {
             duplicate(head);
         }
    void Print(){
        Node* temp=head;
        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
     void Print(ostream &o){
        Node* temp=head;
        while (temp!=NULL){
            o<<temp->data<<" ";
            temp=temp->next;
        }
        o<<endl;
    }
    };
ostream &operator<<(ostream &o, LinkedList &ll){
    ll.Print(o);
    return o;

}
int main()
{
    LinkedList ll;
    int n,t;cin>>t>>n;
    for(int i=0;i<n;i++){
      int data;cin>>data;
      ll.InsertAtEnd(data);}
    cout<<ll;
    ll.dupli();
    cout<<ll;

}
