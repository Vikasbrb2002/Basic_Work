#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> name;
    name[1]="vikas";
    name[3]="Abhishek";
    name[6]="aish mishra";
     // map<int,string> ::iterator it;
    for(auto it=name.begin();it!=name.end();++it){
        cout<<it->first<<" "<<it->second;
        cout<<endl;
    }
    cout<<endl;
     name.erase(3);
    for(auto &value:name){
        cout<<value.first<<" "<<value.second;
        cout<<endl; 
    }
    // auto it=name.find(4);
   
    // if(it==name.end()){
    //     cout<<"Noting"<<endl;
    // }else{
        //  cout<<it->first<<" "<<it->second<<endl;

    // }

          //Question - count the number of strings 

    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }     
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }  
    return 0;
}