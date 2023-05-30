#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2,3,4,5};
    for(auto value: arr){
        cout<<value<<" ";
    }
    cout<<endl;
    int k=2;
    vector<int> rotate(arr.size());
    for(int i=0;i<arr.size();i++){
        rotate[(i+k)%arr.size()]=arr[i];
    }
    // rotate=arr;
    for(auto &value:rotate){
        cout<<value<<" ";
    }
    return 0;
}