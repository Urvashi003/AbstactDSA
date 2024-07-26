#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={8,0,3,4,5};
    priority_queue<int,vector<int>,greater<int>>pq;
    int n =5;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<endl;
    return 0;
}
