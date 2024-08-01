#include<bits/stdc++.h>
using namespace std;
int main(){
    //max no of items that I can purchase
    vector<int> arr ={100,1,2,9,300};
    priority_queue<int,vector<int>,greater<int>>pq;
    int cnt=0;
    int sum =10;
    for(auto it: arr){
        pq.push(it);
    }
    while(!pq.empty()){
        if(pq.top()<sum){
            sum = sum- pq.top();
            pq.pop();
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<"max ele are->"<<cnt<<endl;

}