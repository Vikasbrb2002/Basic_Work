#include<bits/stdc++.h>
using namespace std;
// pehla code Factorial ke nam
int factorial(int n){
    cout<<"function call for value n: "<< n<<endl;
    // Base case
    if(n==1)
    return 1;
    // Recursive call
    int ans=n*factorial(n-1);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
    return 0;
}