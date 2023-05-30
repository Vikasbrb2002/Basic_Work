#include<bits/stdc++.h>
using namespace std;
class Aboutcopy{
    public:
    int y;
    int *x;
    Aboutcopy(int Y,int X){
        this->y=Y;
         x=new int(X);}
        // *x=X;}
        void print(){
        cout<<"The values are : "<<this->y<<"\n"<<(*x)<<"\n"<<x;
     cout<<"\n\n";
    }
    // deep copy 
     Aboutcopy(const Aboutcopy &obj){
       this->y=obj.y;
       x=new int(*obj.x);

     }
};
int main()
{
    Aboutcopy input(19,10);
    input.print();
    Aboutcopy b=input;
    b.print();
   *b.x=20;
    b.print();
    input.print();
    return 0;
}