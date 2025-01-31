#include<bits/stdc++.h>
using namespace std;

class TwoStack{
   public:
   int *arr;
   int size;
   int top1;
   int top2;

   //behav
   TwoStack(int s){
    this->size=size;
    arr= new int[s];
    top1 = -1;
    top2= s;
   }
   void push1(int element){
      if((top2-top1)>1){
        top1++;
        arr[top1]= element;
      }
      else{
        cout<<"overflow"<<endl;
      }
   }
   void push2(int element){
       if((top2-top1)>1){
        top2--;
        arr[top2]= element;
       }
       else{
        cout<<"overflow"<<endl;
       }
   }

   int pop1(){
     if(top1>=0){
        int ans = arr[top1];
        top1--;
        return ans;
     }
     else{
        return -1;
     }
   }
   int pop2(){
     if(top2<size){
       int ans = arr[top2];
       top2++;
       return ans;
     }
     else{
        return -1;
     }
   }

};

int main(){
    TwoStack st(5);
    st.push1(1);
    st.push1(2);
    st.push2(9);
    st.push2(8);
    cout<<st.pop1()<<endl;
    
}