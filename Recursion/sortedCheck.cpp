#include<iostream>
using namespace std;

bool check(int arr[], int n, int i){
    //bc
    if(i==(n-1)) return true;
    //process
    if(arr[i]>arr[i+1]){
        return false;
    }
   
    return check(arr,n,i+1);
}

int main(){
    int arr[] ={1,2,3,4,5};
    int n=5;
    int i=0;
    if(check(arr,n,i)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}