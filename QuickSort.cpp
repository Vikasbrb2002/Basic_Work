// Main concept of the QuickSort is that Take a pivot element and assign the smaller element 
// left to pivot element and largest element element right to pivot element.
#include<bits/stdc++.h>
using namespace std;
void Quicksort(int arr[],int start,int end){
    if(start>=end) return;
    int pivot=end;
    int i=start-1;
    int j=start;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            ++i;
            swap(arr[i],arr[j]);
        }
        ++j;
    }
    ++i;
    swap(arr[i],arr[pivot]);
    Quicksort(arr,start,i-1);
    Quicksort(arr,i+1,end);
}
int main(){
    
    int arr[]={4,5,33,4,5,66,44,55,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    Quicksort(arr,start,end);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" " ; 
    }
    return 0;
}