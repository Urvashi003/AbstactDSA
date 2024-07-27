#include<iostream>
using namespace std;

bool search(int arr[], int n, int key, int i){
    //bc
    if(i==n) return false;
    if(arr[i]==key) return true;
    return search(arr,n,key,i+1);
}
int main(){
    int arr[] = {1,4,5,6,7};
    int n = 5;
    int i=0;
    int key = 8;
    if(search(arr,n,key,i)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}