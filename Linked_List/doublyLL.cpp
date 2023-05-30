#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
     Node* prev;
     Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
     }
     Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
     }
};
int getlength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtbeg(Node* &head,Node* &tail,int data){
    
     if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
     }
        Node* newNode= new Node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        // newNode->prev=NULL;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
     Node* head=NULL;
     Node* tail=NULL;
     insertAtbeg(head,tail,10);
     insertAtbeg(head,tail,20);
     insertAtbeg(head,tail,30);
     insertAtbeg(head,tail,40);
     display(head);
    //  cout<<getlength(head);
    return 0;
}