#include<bits/stdc++.h>
using namespace std;

class Cqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Cqueue(int size){
        this->size = size;
        arr= new int[size];
        front = -1;
        rear = -1;
    }
    void push(int val){
        if(front==rear==-1){
            front++;
            rear++;
            arr[rear]= val;
        }
        else if((front==0 and rear== size-1) or rear== front-1){
           cout<<"overflow"<<endl;
        }
        else if(rear == size-1 and front !=0){
            rear=0;
            arr[rear]= val;
        }
        else{
            rear++;
            arr[rear]= val;
        }
    }
    void pop(){
        if(front == -1 and rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            arr[front] = -1;
            front=0;
        }
        else{
            arr[front]= -1;
            front++;
        }
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }

};

int main(){
    Cqueue qt(4);
    qt.push(7);
    qt.push(8);
    qt.push(3);
    qt.print(); //7 8 3
    cout<<endl;
    qt.pop();
    qt.pop();
      qt.pop();
    qt.print(); // 3

}