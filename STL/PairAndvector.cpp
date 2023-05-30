#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
cout<<"size of vector "<<v.size()<<endl;
// v.pop_back();
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
 v.push_back(102);
 cout<<endl;

}
int main(){
    //pair
    // pair<int,string> p;
    // p=make_pair(2,"vikas");
    // cout<<"The pair in between : "<<p.first<<" "<<p.second;
    // //make a copy of pair
    // pair<int,string> &p1=p;
    // p1.first=5;
    // cout<<"The pair in between : "<<p1.first<<" "<<p1.second;
    // cout<<endl;
    // pair<int , int> p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={3,4};
    // p_array[2]={5,6};
    // swap(p_array[0],p_array[2]);
    // for(int i=0;i<3;i++){
    //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }


    //Vector 
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    vector<int> c(10,1);
    c.push_back(10);
    print(c);
    // cout<<endl;
    cout<<"pop operation is done"<<endl;

    c.pop_back();
    print(c);
     print(c);
    return 0;
}