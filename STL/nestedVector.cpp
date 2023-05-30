#include<bits/stdc++.h>
using namespace std;
// void print(vector<pair<int,int>> &v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
// }
void print(vector<int> &v){
    cout<<"size of vector is : "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //pair in vecttorrr----
    // vector<pair<int,int>> v={{1,10},{2,20},{3,30}};
    // vector<pair<int,int>> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back({x,y});
    // }
    // print(v);
     
     //vector Array ---
     int N;             //Bahar wale vector ka size
     cin>>N;
    //  vector<int> v[N];  //there is N vectors in this vector 
    //   for(int i=0;i<N;i++){
    //     int n;          // undar wale vector ka size
    //     cin>>n;
    //     for(int j=0;j<n;j++){
    //         int x;
    //         cin>>x;
    //         v[i].push_back(x);
    //     }
    //   }
    //   for(int i=0;i<N;i++){

    //   print(v[i]);
    //   }

    
      //Vector in vector
      vector<vector<int>> vv;
      for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vv.push_back(temp);
      }
       for(int i=0;i<vv.size();i++){

      print(vv[i]);
      }
    return 0;
}