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

    void push(int element){
        if((size-top)>1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"overflow";
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"underflow";
        }
    }

    int peek(){
       if(top>=0) return arr[top];
       else{
        cout<<" stack is empty"<<endl;
        return -1;
       }
    }

    bool isempty(){
        if(top==-1) return true;
        else return false;
    }

};

int main(){

   Stack st(5);
   st.push(3);
   st.push(2);
   st.push(9);
   st.pop();
   cout<<st.peek()<<endl;



}
