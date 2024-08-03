#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
        this->size= size;
        arr= new int[size];
        front= -1;
        rear = -1;
    }

    void push(int x){
        if(rear== size-1){  //galti
          cout<<"queue is full,cant insert"<<endl;
        }
       else if(front== -1 and rear == -1){
          front++;
          rear++;
          arr[rear]= x;
        }
        else{
            rear++;
            arr[rear]= x;
        }
    }

    void pop(){
        if(front== rear == -1){
            cout<<"underflow"<<endl;
        }
        else if(front == rear-1){  //galti
            arr[front]= -1;
            front= -1;
            rear = -1;
            
        }
        else{
            arr[front]=-1;
            front++;
        }
    }

    int getSize(){
        if(front == -1 and rear == -1) return 0; //galti
        else  return rear-front+1;
       
    }

   

    int getTop(){
        if(front== -1){
            cout<<"no ele in front"<<endl;
        }
        return arr[front];
    }


    void print(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    // Queue qt(5);
   Queue qt(5); // Create a queue with a maximum size of 5
    qt.push(8);
    qt.push(9);
    qt.push(7);
    qt.print(); // Should print: 8 9 7
    cout << endl;

    qt.pop();
    qt.pop();
    qt.print(); // Should print: 7
    cout << endl;

    qt.getTop(); // Should print: Top element: 7
    qt.print(); // Should print: 7
   



}