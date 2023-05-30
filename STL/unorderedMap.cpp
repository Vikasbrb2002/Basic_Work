#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int query;
    cin>>query;
    while(query--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
    return 0;
}