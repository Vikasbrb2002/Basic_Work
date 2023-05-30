#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    string str;
    void print(){
        cout<<age<<" "<<this->weight<<" "<<this->str<<endl;
    }
    ~ Animal(){
        cout<<"I am inside the destructure"<<endl;
    }
};
int main(){
    Animal a;
    a.age=10;
    a.weight=100;
    a.str="Lalu";
    a.print();
    Animal* b=new Animal;
    b->age=11;
    b->weight=19;
    b->str="Bhalu";
    b->print();
    b->str[0]='A';
    b->print();
    delete b;
    


    return 0;
}