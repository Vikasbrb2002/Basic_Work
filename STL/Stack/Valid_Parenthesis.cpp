#include<bits/stdc++.h>
using namespace std;
bool valid(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
            // s.pop();
        }
        else{
            if(!s.empty()){
                char topch=s.top();
                    // s.pop();
                if(ch==')' && topch=='('){
                    s.pop();
                }
                else if(ch=='}' && topch=='{')
                    s.pop();
                else if(ch==']' && topch=='[')
                    s.pop();   
                else{
                    return false;
                }
            }
           
         else{
                return false;
            }
        }
    }
        if(s.empty())
        return true ;
        else return false;
}
int main(){
    string str="(())";
    // cin>>str;
    if(valid(str)){
        cout<<"This is valid "<<endl;
    }else{
        cout<<"Not valid"<<endl;
    }
    return 0;
}