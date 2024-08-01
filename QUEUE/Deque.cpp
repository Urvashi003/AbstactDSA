#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_front(0);
    dq.push_back(8);

    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    dq.pop_back();
     for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    auto it = dq.begin();
    it++;
    dq.insert(it,200);
    for(auto x: dq){
        cout<<x<<" ";
    }



}
