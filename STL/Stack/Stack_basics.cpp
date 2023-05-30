#include<iostream>
using namespace std;
class stack{
    public:
    int* arr;
    int size;
    int top;
    stack(int size){
      arr =new int[size];
      this->size=size;
      top=-1;
    }

void push(int data){
    if(size-top>=1){
    top++;
    arr[top]=data;}
    else{
        cout<<"Overflow"<<endl;
    }
    
}
void pop(){
    if(top==-1){
        cout<<"Underflow"<<endl;
    }else{
        top--;
    }
}
 
 int peek(){
    if(top==-1){
        cout<<"No element"<<endl;
    }
    else
   return arr[top];
 }
 int TotalElement(){
    if(top!=-1){
        return top+1;
    }
 }
 bool isEmpty(){
    if(top==-1){
        return true;
    }
    else
     return false;
 }
 bool isFull(){
    if(top==size-1){
        return true;
    }else{
        return false;
    }
 }


};
int main(){
    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
      s.push(90);
     s.push(110);
     s.push(100);
    
    // s.pop();
    // s.pop();
    // s.pop();
     cout<<"Peek element is "<<s.peek()<<endl;
      cout<<"Is stack is full "<<s.isFull()<<endl;
    while(!s.isEmpty()){
        cout<<s.peek()<<" ";
          s.pop();
    }
    cout<<endl;
    cout<<"Is stack is empty "<<s.isEmpty()<<endl;
    return 0;
}