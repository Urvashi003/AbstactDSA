#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s , int e, int mid){
    int leftLen = mid-s+1;
    int rightLen = e-mid;

    int *left = new int(leftLen);
    int* right = new int(rightLen);
    
    int mainIndex =s;
    for(int i=0; i<leftLen; i++){
       left[i] = arr[mainIndex];
       mainIndex++;
    }
    for(int i=0; i<rightLen; i++){
        right[i]= arr[mainIndex];
        mainIndex++;
    }

    int l=0;
    int r=0;
    int m=0;
    while(l<leftLen and r<rightLen){
        if(left[l]>right[r]){
            arr[s]= right[r];
            s++;
            r++;
        }
        else{
            arr[s]= left[l];
            s++;
            l++;
        }
    }
    while(l<leftLen){
        arr[s]= left[l];
        s++;
        l++;
    }
    while(r<rightLen){
        arr[s]= right[r];
        s++;
        r++;
    }
    delete []left ;
    delete  []right;

}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e,mid);
}
int main(){
    int arr[]= {2,1,5,9,4,5};
    int n = 6;
    int s=0;
    int e = n-1;
    mergeSort(arr,s,e);

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}