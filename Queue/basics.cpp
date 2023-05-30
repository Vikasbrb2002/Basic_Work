#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
   int* arr;
   int size;
   int front;
   int rear;
   Queue(int data){
    arr=new int[data];
    this->size=size;
    front=0;
    rear=0;
   }
   void push(int data){
    if(rear==size){
        cout<<"full"<<endl;
    }else{
        arr[rear]=data;
        rear++;
    }
    void pop(){
        if(rear==front){
            cout<<"empty"<<endl;
        }
        else{
            arr[front]=-1;
            front=front+1;
            if(front==rear){
                rear=0;
                front=0;
            }
        }
    }
    int getsize(){
        return (rear-front);
    }
    bool isEmpty(){
        if(rear==front){
            return true;

        }else return false;
    }
   }
};
int main(){
    Queue q(10);
    q.push(10);
    q.push(11);
    q.push(12);
    cout<<q.getsize();
    return 0;
}