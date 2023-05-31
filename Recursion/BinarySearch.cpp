#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &arr,int s,int e,int key){
    //Base case
    if(s<=e){
      
    int mid=(s+e)/2;
    if(arr[mid]==key)
    return mid;
    if(arr[mid]<key) 
    return BinarySearch(arr,mid+1,e,key);
    else 
    return BinarySearch(arr,s,mid-1,key);
    }
    return -1;
}
int main(){
    vector<int> arr{10,2,3,4,12,5,33};
    int n=arr.size();
    int target=10;
    int s=0;
    int e=n-1;
    int ans=BinarySearch(arr,s,e,target);
    cout<<"Answer is : "<<ans;
    return 0;
}