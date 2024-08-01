#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int* arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        arr= new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val){
        //check full
        if(rear == size-1){
            cout<<"queue overflow"<<endl;
        }
        else if(front == -1 and rear == -1){
            front++;
            rear++;
            arr[rear]= val;
        }
        else{
            rear++;
            arr[rear]= val;
        }
    }

    void pop(){
        //underflow
        if(front == -1 and rear == -1){
            cout<<"queue underflow"<<endl;
            return;

        }
        else if(front==rear){
            arr[front]= -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front++;
        }
    }

    int getSize(){
        if(front == -1 and rear == -1){
            return 0;
        }
        else{
            return rear-front+1;
        }
    }

    int getFront(){
        if(front == -1){
            cout<<"queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }

    void print(){
        cout<<"printing queue"<<endl;
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    Queue qt(5);
    qt.print();
    qt.push(10);
    qt.print();
    cout<<"size->"<<qt.getSize()<<endl;
    
}