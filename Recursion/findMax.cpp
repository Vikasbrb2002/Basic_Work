#include<bits/stdc++.h>
using namespace std;
void findMax(int arr[],int n,int i, int& maxi){
    //Base case 
    if(i>=n){
        //pura array traverse hone ke baad
        return;
    }
    //Ek case solve solve krna h
    
    maxi=max(arr[i],maxi);
    // baki recursion sabhal lega

    findMax(arr,n,i+1,maxi);
}
int main(){
    int arr[7]={10,20,33,22,39,88,7};
    int n=7;
    int i=0;
    int maxi=INT_MIN;
    findMax(arr,n,i,maxi);
    cout<<"Maximum no. is : "<<maxi;
    return 0;
}