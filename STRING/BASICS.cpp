#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<"The length of string is : "<<str.length()<<endl;;
    cout<<str.empty()<<endl;
    str.push_back('B');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;;
    cout<<"Part of the string is : ";
    string part=str.substr(0,2);
    cout<<part<<endl;;
    // string target ="bind";
    // cout<<str.find(target);
    str.erase(6,6);
    cout<<str;
    return 0;
}