#include<bits/stdc++.h>
using namespace std;

int MinCost(int arr[], int n){
    priority_queue<int,vector<int>, greater<int>> qt;
    for(int i=0;i<n;i++){
        qt.push(arr[i]);
    }
    int cost=0;
    while(qt.size()>1){
        int a= qt.top();
        qt.pop();
        int b = qt.top();
        qt.pop();
        cost += a+b;

        int sum = a+b;
        qt.push(sum);
    }
    return cost;
}

int main(){
    int arr[]= {2,3,4,6};
    int n=4;
    int ans = MinCost(arr,n);
   cout<<ans;
   return 0;
}