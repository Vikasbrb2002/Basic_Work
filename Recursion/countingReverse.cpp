#include<bits/stdc++.h>
using namespace std;
void ReverseCount(int n){
    if (n==0)
    return;
    cout<<n<<" ";
    ReverseCount(n-1);
}
int main(){
    int n;
    cin>>n;
    ReverseCount(n);
    return 0;
}