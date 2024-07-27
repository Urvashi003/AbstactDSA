#include<iostream>
using namespace std;

// int fact(int n){
//    //bc
//    if(n==0) return 1;
//    return n* fact(n-1);
// }

// int sum(int n){
//    //bc
//    if(n==0) return 0;
// //    if(n==1) return 1;
//    return n+sum(n-1);
// }

// int pow(int n){
//     if(n==0) return 1;
//     if(n==1) return 2;
//     return 2* pow(n-1);
// }

// int cnt(int n){
//     //bc
//     if(n==1) return 1;
//     cout<<n<<endl;
//      cnt(n-1);

// }


// bool search(int arr[],  int key, int s, int e){
//     //bc
//    if(s>e) return false;
   
//    int mid = s +((e-s)/2);
//    if(arr[mid]==key) return true;
//    else if(arr[mid]>key){
//      return search(arr,key,s,mid-1);
//    }
//    else{
//    return search(arr,key,mid+1,e);
//    }
// }



int main(){
    int arr[]= {1,2,7,8};
    int n = 4;
    int key = 0;
    int s=0;
    int e=n-1;
    
    // int ans = cnt(6);
    if( search(arr,key,s,e)){
      cout<<"true" ;
    } 
    else {
        cout<<"false";
    }
 
}