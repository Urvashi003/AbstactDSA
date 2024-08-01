#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    n= n>>(k-1);
    if((n&1)==1) cout<<"set haiii"<<endl;
    else cout<<"not set"<<endl;
}