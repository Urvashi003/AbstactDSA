#include<bits/stdc++.h>
using namespace std;

int FractionalKnap(vector<int>val,vector<int>wt, int n , int capacity){
    vector<float> ratio;
    for(int i=0; i<n; i++){
        int Ratio = val[i]*1.0 /wt[i];
        ratio.push_back(Ratio);


    }
    priority_queue<pair<float,pair<int,int>>>qt;
    for(int i=0;i<n;i++){
        qt.push({ratio[i],{val[i],wt[i]}});
    }
    int totalVal=0;
    while(capacity!=0 and !qt.empty()){
        auto front = qt.top();
        int ratio = front.first;
        int val = front.second.first;
        int wt= front.second.second;
        qt.pop();

        if(capacity>=wt){
            totalVal += val;
            capacity -=wt;
        }
        else{
            int valToAdd = ratio* capacity;
            totalVal +=valToAdd;
            capacity=0;
            break;
        }

    }
    return totalVal;


}

int main(){
    vector<int>val ={60,100,120};
    vector<int>wt = {10,20,30};
    int n =3;
    int capacity = 50;
    int ans =FractionalKnap(val,wt,n,capacity);
    cout<<ans;
    return 0;
}