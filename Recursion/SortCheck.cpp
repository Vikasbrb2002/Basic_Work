#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n,int i){
    //base condition
    // if(i>=n){
    //     return true;
    // }
    // if(arr[i+1]<arr[i]) return false;
    // else{
    //  sorted(arr,n,i+2);
    // }
    
    if(i==n-1) return true;
    if(arr[i+1]<arr[i]) return false;
    return sorted(arr,n,i+1);
    
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