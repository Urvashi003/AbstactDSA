#include<bits/stdc++.h>
using namespace std;


void insertInStack(stack<int> &s, int num){
    // if(s.empty()){
    //     s.push(num);

    // }
   stack<int>qt;
   
    while(!s.empty() and s.top()>num){
        int ele = s.top();
        s.pop();
        qt.push(ele);
    }
    s.push(num);
    while(!qt.empty()){
        s.push(qt.top());
        qt.pop();
    }

    return;

   
    
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
//     while(!s.empty()){
//     cout<<s.top()<<endl;
//     s.pop();
//    }
//    cout<<endl;

    int num = 25;

    insertInStack(s,num);
   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }
   return 0;
}