#include<iostream>
using namespace std;
class stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;
  stack(int size){
    arr=new int[size];
    this->size=size;
    top1=-1;
    top2=size;
  }
  void push1(int data){
     if(top1-top2==1){
        cout<<"Size not available in stack 1"<<endl;
     }
     else{
        top1++;
        arr[top1]=data;
     }

  }
  void pop1(){
    if(top1==-1){
        cout<<"Underflow"<<endl;
    }else{
        top1--;
    }
    }
  
  void push2(int data){
    if(top1-top2==1){
        cout<<" stack 2 is overflow "<<endl;
    }else{
        top2--;
        arr[top2]=data;
    }
  }
  int pop2(){
    if(top2==size-top1){
        cout<<"underflow"<<endl;
    }else{
        top2++;
    }
  }
  void print(){
    cout<<endl;
    cout<<"top1 "<<top1<<endl;
    cout<<"top2 "<<top2<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
  }
};
int main(){
    stack s(10);
    s.push1(10);
    // s.print();
     s.push1(30);
   // s.print();
     s.push1(50);
    s.print();
     s.push1(70);
    s.print();
     s.push2(70);
    s.print();
    s.push2(80);
    s.print();
    s.push1(90);
    s.print();
    s.push1(100);
    s.print();
    s.push2(99);
    s.print();
    s.push1(1000);
    s.print();
    s.push1(100000);
    s.print();


  
    return 0;
}