#include<bits/stdc++.h>
using namespace std;
int length(char name[]){
    int count=0;
    int i=0;

    while(name[i]!='\0'){
        // count++;
        i++;
    }
    return i;
}
void reverseName(char name[]){
    int i=0;
    int j=length(name)-1;
    while(i<=j){
        swap(name[i],name[j]);
        // char temp=name[i];
        // name[i]=name[j];
        // name[j]=temp;
        i++;
        j--;
    }

}
void replaceAllspace(char name[]){
     int i=0;
    int n=strlen(name);
     while(i<n){
        // for(int i=0;i<n;i++){
        if(name[i] == ' '){
            name[i]='@';
        }
             i++;
    }
}
int main(){
    char name[100];
    // cout<<"Enter your without space : ";
    // cin>>name;
    // // name[0]='L';
    // cout<<"Your name is : "<<name<<endl;
    cout<<"Enter your full name : ";
    cin.getline(name,100);
    cout<<"Your full name is : "<<name<<endl;
    cout<<"The length is "<<length(name)<<endl;
    // reverseName(name);
    // cout<<"After reverse :"<<name<<endl;
    replaceAllspace(name);
    cout<<name;
    return 0;
}