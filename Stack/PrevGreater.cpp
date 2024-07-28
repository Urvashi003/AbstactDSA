#include<bits/stdc++.h>
using namespace std;

int main(){
   
    

     vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
   
   vector<int>ans(v.size());
   stack<int>s;
   s.push(-1);
   for(int i=0; i<v.size(); i++){
    int curr = v[i];
    while( !s.empty() and s.top()<=curr){
        s.pop();
    }
    if(s.empty()){
       ans[i]= -1;
    }
    
   else { ans[i]= s.top();
   }
    s.push(curr);
   }

   for(auto it: ans){
    cout<<it<<" ";
   }

return 0;
}