#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(1);

    stack<int>s;
    s.push(-1);
    vector<int>ans(v.size());

    for(int i=v.size()-1; i>=0; i--){
      int curr= v[i];
      while(s.top()>=curr){
        s.pop();
      }
      ans[i]= s.top();
      s.push(curr);
    }
    cout<<"printing ans"<<endl;
    for(auto it: ans){
        cout<<it<<" ";
    }
    return 0;

}