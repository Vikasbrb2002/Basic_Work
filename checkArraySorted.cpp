#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n,int i){
    if(i>=n){
        return true;
    }
    if(arr[i+1]<arr[i]) return false;
    else{
     sorted(arr,n,i+1);
    }
    // return true;
    
}
int main(){
    int n;
    cin>>n;
    int i=0;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(sorted(arr,n,i)){
        cout<<"YEs, Array is sorted"<<endl;
    }
    else cout<<"Not sorted";
    return 0;
}