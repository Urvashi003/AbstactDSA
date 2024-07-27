#include<iostream>
using namespace std;
void oddele(int arr[], int n, int i){
    if(i==n) return;
    if((arr[i]%2)!=0){
        cout<<arr[i]<<endl;
    }
    oddele(arr,n,i+1);
  
}

int main(){
    int arr[]= {1,2,3,4};
    int n=4;
    int i=0;
     oddele(arr,n,i);
     return 0;
}