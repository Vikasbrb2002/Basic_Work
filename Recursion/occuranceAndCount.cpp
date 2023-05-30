#include<bits/stdc++.h>
using namespace std;
void occurance(string& name,int n,int i,char key,int& count){
    //Base case 
    if(i>=n) return;
    
    if(name[i]==key)
   
    cout<<i<<" ";
    // count++;
    return occurance(name,n,i+1,key,count);
}
int main(){
    string name="abhishekvishwakarma";
    int i=0;
    int count=0;
    int n=name.length();
    char key='a';
    // vector<int>ans;
    cout<<"present at : ";

    occurance(name,n,i,key,count);
    // cout<<"Total number of a in string : "<<count;
    return 0;
}