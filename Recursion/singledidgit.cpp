#include<iostream>
using namespace std;
void print(int n){
   
    if(n==0) return ;
       
   int digit = n%10;
   
   print(n/10);
   cout<<digit<<endl;
   
}

int main(){
    int n = 7879;
     print(n);
    return 0;
}