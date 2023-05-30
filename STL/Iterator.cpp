#include<bits/stdc++.h>
using namespace std;
int main(){
    //reverse of array with iterator
    // vector<int> v={1,2,3,4};
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // vector<int> :: iterator it=v.end();
    // for(int i=0;i<v.size();i++)
    // cout<<(*(it-i-1))<<" ";
    vector<pair<int,int>> v_p={{1,2},{10,20},{3,30}};
    vector<pair<int,int>> :: iterator it;
    // for(it=v_p.begin();it!=v_p.end();++it){
    //     int x,y;
    //     cin>>x>>y;
    //     v_p.push_back({x,y});
    // }
    for(it=v_p.begin();it!=v_p.end();++it){
         cout<<it->first<<" "<<it->second;
        
        cout<<endl;
    }
    // cout<<endl;
    //Range based loop
    for(pair<int,int> value:v_p){
        cout<<value.first<<" "<<value.second;
        cout<<endl;
    } 
    return 0;
}