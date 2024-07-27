#include<iostream>
using namespace std;

int maxi(int arr[], int n, int i){
   
   
   if(i==n) return arr[i-1];
   //process
  
   int maxm = maxi(arr,n,i+1);
   if(arr[i]>maxm) {
    return arr[i];
   }
   else{
    return maxm;
   }

}

int main(){
    int arr[]= {1,2,5,9,8};
    int n =5;
    int i=0; 
   cout<< maxi(arr,n,i);
   return 0;
    
}