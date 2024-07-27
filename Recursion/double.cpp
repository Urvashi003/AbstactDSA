#include<iostream>
using namespace std;

void doubleele(int arr[], int n, int i){
     //bc
     if(i==n) return ;
     //process
     cout<< 2*arr[i]<<endl;
     doubleele(arr,n,i+1);

}
int main(){
    int arr[]= {1,2,3,4,5};
    int n =5;
    int i=0;
    doubleele(arr,n,i);
}