#include<iostream>
using namespace std;

void print(int arr[3][4],int row, int col){
   for(int i=0;i<row; i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}

void printCol(int arr[3][4], int row, int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

bool search(int arr[][4], int row, int col, int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
                break;
            }
        }
    }
    return false;
}

int maxi(int arr[][4], int row, int col){
    int maxele=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxele){
                maxele= arr[i][j];
            }
        }
    }
    return maxele;
}

int mini(int arr[][4], int row, int col){
    int minele=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minele){
                minele= arr[i][j];
            }
        }
    }
    return minele;
}

void RowSum(int arr[][4], int row, int col){
   
    for(int i=0;i<row; i++){
         int total=0;
        for(int j=0;j<col;j++){
            total += arr[i][j];
            
        }
        cout<<total<<" ";
       
    }
}

void ColSum(int arr[][4], int row, int col){
    for(int i=0;i<col;i++){
        int total=0;
        for(int j=0; j<row;j++ ){
            total += arr[j][i];
        }
        cout<<total<<" ";
    }
    cout<<endl;
}

void DiagSum(int arr[][3], int row, int col){
     int total=0;
    for(int i=0;i<row;i++){
       
        for(int j=0;j<col;j++){
            if(i==j){
                total += arr[i][j];
                
            }
        }
    }
     cout<<total<<" ";
}

int main(){
    //1d- static
    // int arr[9];
    // //dynamic
    // int *arr = new int[8];
    // //2d array
    // int arr[9][8];
    int col = 4;
    int row =3;

    int arr[3][4]= {{2,1,3,4}, {5,6,7,8},{10,11,12,14}};
    int arr2[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

    // print(arr,row,col);
    // cout<<endl;
    // printCol(arr,row,col);
    // bool ans = search(arr,row,col,9);
    // cout<<ans;
    // cout<<maxi(arr,row,col);
    // cout<<endl;
    // cout<<mini(arr,row,col);
    // RowSum(arr,row,col);
    // ColSum(arr,row,col);
    DiagSum(arr2,3,3);


}