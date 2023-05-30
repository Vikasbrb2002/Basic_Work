#include<bits/stdc++.h>
using namespace std;
class Animal{
    protected:
    int age ;
    int height;
    string name;
    void sleep(){
        cout<<"The Animal is sleeping "<<endl;
    }
};
class Dog:private Animal{
       public:
     void sleep(){
        cout<<"The dog is sleeping "<<endl;
    }
    int sum(int a ,int b){
        return a+b;
    }

};
class Cat : public Dog{
    public:
     void sleep(){
        cout<<"Cat is sleeping "<<endl;
     }
};
int main(){
    Dog* a = new Cat;  
    // a->age;
    a->sleep();
    cout<<(*a).sum(10,10)<<endl;
     Cat mew;
    mew.sleep();
    Animal bail;
    // bail.sleep();
    return 0;
}