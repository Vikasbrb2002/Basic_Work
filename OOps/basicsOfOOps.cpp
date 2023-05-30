#include<bits/stdc++.h>
using namespace std;
class Animal{
     public:
 //Data member 
    int height;
    int weight;
    int age;
    string name;
                    //Member fuctions
    void eat(){
        cout<<"Eating for living "<<endl;
    }
    void habbits(){
        cout<<"Eating ,walking, sleeping etc. "<<endl;
    }
    // public:
    // void setweight(int weight){
    //     this->weight=weight;
    // }
    // int getweight(){
    //     return this->weight;
    // }
                    // Constructor 
    Animal(){
        this->height=0;
        this->weight=0;
        this->name="hello g";
       cout<<"Constructor is called"<<endl;
        cout<<this->height<<" "<<this->weight<<" "<<this->name<<endl;
    }
    Animal(int weight,int height,string name){
        this->weight=weight;
        this->height=height;
        this->name=name;
        cout<<"This is second constructor"<<endl;
    }
    Animal(Animal &obj){
        this->weight=obj.weight;
        this->height=obj.height;
        this->name=name;
    }
    void print(){
        cout<<this->height<<" "<<this->weight<<" "<<this->name<<endl;
    }
    ~Animal(){
        cout<<"I am inside the destructor"<<endl;
    }
};
int main(){
    Animal Dog(109,1000,"vikas kumar");
    Dog.name[0]='G';
     Dog.print();
    
    Animal a=Dog;
    
     Dog.print();
     Animal *cat= new Animal();
     cat->weight=999;
     delete cat;
    // Dog.name="Abhishek";
    // Dog.setweight(20);  
    // cout<<Dog.getweight()<<endl;
    // Dog.eat();
    // Dog.habbits();
    // cout<<sizeof(Dog)<<endl;
    // cout<<Dog.name<<endl;
    return 0;
}