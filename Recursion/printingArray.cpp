#include<bits/stdc++.h>
using namespace std;
void print(int* arr,int n,int i){
    if(i>=n) return;
    print(arr,n,i+1); // reverse an array
    cout<<arr[i]<<" ";
    //print(arr,n,i); // print an array 
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int i=0;
    print(arr,n,i);
    return 0;
}