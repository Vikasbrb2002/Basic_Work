#include<bits/stdc++.h>
using namespace std;
void ToconvertUppercase(char name[]){
    int n=strlen(name);
    for(int i=0;i<n;i++){
        name[i]=name[i]+'A'-'a';
    }
}
int main(){
    char name[100]="vikas";
    // cin>>name;
    ToconvertUppercase(name);
    cout<<name;
    return 0;
}