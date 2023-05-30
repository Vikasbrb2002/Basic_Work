// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool checkpalindrom(char name[]){
    int i=0;
    int j=strlen(name)-1;
    while(i<=j){
        if(name[i]!=name[j]){
            return false;}
            // else{
        i++;
        j--;
        // }
    }
    return true;
}
int main() {
   char name[100];
   cout<<"Enter the name to check weather it is palindrome or not"<<endl;
   cin>>name;
   if(checkpalindrom(name))
   cout<<"Yes,this is a palindromic letter "<<endl;
   else{
       cout<<"No,this is not";
   }

    return 0;
}