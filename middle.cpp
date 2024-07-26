#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    //proper
    int *arr;
    int size;
    int top;

    //behav
    Stack(int s){
        this->size= s;
        arr = new int[s];
        top = -1;
    }
};

int main(){
    stack<int>odd;
    stack<int>even;

    int o=5;
    int e =6;

    for(int i=0; i<o; i++){
        odd.push(5);
        odd.push(5);
        odd.push(0);
        odd.push(9);
        odd.push(8);


    }

    for(int i=0;i<e;i++){
        even.push(5);
        even.push(5);
        even.push(7);
        even.push(9);
       even.push(8);
        even.push(0);
    }

    int midodd = (o+1)/2;
    for(int i=0; i<midodd ;i++){
        odd.pop();
    }
     

     int mideven = (e/2);
     for(int i=0;i<mideven;i++){
        even.pop();
     }

     cout<<odd.top()<<endl;
     cout<<even.top()<<endl;
}