#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(){
     int data=0;
     Node* next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    
   };
    int getlen(Node* &head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
  }
 
  //I wnat insert a node at head 
   void insertAthead(Node* &head,Node* tail,int data){
    //LL is empty 
        if(head==NULL){
            Node* newNode =new Node(data);
            head=newNode;
            tail=newNode;
            return;
            }
            else{
         //step 1
            Node* newNode=new Node(data);
       
            //step 2
            newNode->next=head;
           
            //step 3
            head=newNode;
            }
        
}
 void insertAttail(Node* &head,Node* &tail,int data){
   // LL is empty :  
    if(tail==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    } 
    // LL is not empty :
    else{
    //step 1 :
    Node* newNode= new Node(data);
    //step 2 :
    tail->next=newNode;
    // step 3 :
    tail=newNode;
    }
}
 void insertAtpos(int data,int pos ,Node* head,Node* tail){
    Node* prev=head;
    Node* curr;
    // edge case : when new element is first element 
    if(pos==0){
        insertAthead(head,tail,data);
    }
    // when element is last element 
    int len=getlen(head);
    if(pos>=len){
        insertAttail(head,tail,data);
    }
    //step 1 :
    int i=1;
    while(i<pos-1){
        prev=prev->next;
        i++;

    }
    curr=prev->next;
    //step 2 :
    Node* newNode = new Node(data);
    //step 3 :
    newNode->next=curr;
    //step 4:
    prev->next=newNode;
    // newNode = curr;

  }
  void DeleteAtbeg(Node* &head){
        if(head==NULL){
        cout<<"List is already empty "<<endl;
        }
        else{
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        }
  }
  void deleteAtEnd(Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"List is already emptyy"<<endl;
    }
    else{
        Node* prev=head;
        int i=1;
        int len=getlen(head);
        while(i<len-1){
          prev=prev->next;
          i++;
        }
      Node* curr=prev->next;
      prev->next=NULL;
    //   cout<<"Deleted element is :"<<curr->data<<endl;
      delete(curr);

    }
  }
  void deleteAtpos(Node* &head, Node* &tail,int pos){
    if(head==NULL){
        cout<<"List is already empty : "<<endl;
    }
    else if(pos==1){
       DeleteAtbeg(head);
    }
    else{
    Node* prev=head;
    
    int i=1;
    int len=getlen(head);
    while(i<pos-1){
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete(curr);
    }
    
  }
  Node* reverse(Node* &prev,Node* &curr){
    //Base case :
    if(curr==NULL){
        return prev;
    }
    else{
       Node* forword=curr->next;
       curr->next=prev;
       reverse(curr,forword);
    }
   
  }
   void display(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
   int main(){
       Node* head = NULL;
       Node* tail = NULL;
    //   Node* second=new Node(20);
    //   Node* third=new Node(30);
    //   Node* fourth=new Node(40);
    //   head->data=10;
    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // display(first);
    // cout<<endl;
    insertAthead(head,tail,40);
     insertAthead(head,tail,50);
    insertAthead(head,tail,60);
    insertAthead(head,tail,70);
    insertAthead(head,tail,80);
    
    
    display(head);
    // insertAttail(head,tail,10);
    cout<<endl;
    // display(head);
    // cout<<endl; 
    //  int pos;
    //  int element;
    // cout<<"Enter the position where the data has inserted : ";
    // cin>>pos;
    // cout<<endl;
    // cout<<"Element which is going to be inserted : ";
    // cin>>element;
    // insertAtpos(element,pos,head , tail);
    // display(head);
    // cout<<endl;
    // cout<<"Deleted element is :"<<head->data;
    // cout<<endl;
    // cout<<"After deletion elements are : ";
    // DeleteAtbeg(head);
    // display(head);
    //  deleteAtEnd(head,tail);
    //  cout<<endl;
    //  cout<<"After deletion list elements are : ";
    //  display(head);
    //  deleteAtpos(head,tail,pos);
    //  display(head);
    Node* prev=NULL;
    Node* curr=head;
    head=reverse(prev,curr);
    display(head);
    return 0;
}