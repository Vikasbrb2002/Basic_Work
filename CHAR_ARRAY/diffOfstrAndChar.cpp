// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string name="vikasKumar";
    name[2]='\0';
    name[5]='\0';
    cout<<name<<endl;
    char same[100]="vikaskumar";
    same[2]='\0';
    same[5]='\0';
    cout<<same;
    return 0;
}