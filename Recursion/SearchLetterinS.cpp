#include<bits/stdc++.h>
using namespace std;
 bool search(string name,int n,int i,char ch){
    if(i>=n){
        //base case
        return false;
                //if we want index of the ch then 
        // return;   //change bool into int aur main function me bhi changes krna hoga
    }
    if(name[i]==ch) return true;
    //if(name[i]==ch) cout<<"Found at the index : "<<i<<endl;
    return search(name,n,i+1,ch);

 }
int main(){
    string name="vikaskumar";
    int i=0;
    int n=name.length();
    char ch='y';
    bool c=search(name,n,i,ch);
    if(c){
        cout<<"YEs present";
    }
    else{
        cout<<"Not present";
    }

    return 0;
}