#include<bits/stdc++.h>
using namespace std;

class A{
    public:

    void func(int x){
        cout<<"value of x is"<<x<<endl;
    }

    void func(double x){
        cout<<"value of x is"<<x<<endl;
    }

    void func(int x, int y){
        cout<<" value of x and y is"<< x << ", "<<y<<endl;
    }

};

int main(){
    A obj1;
    obj1.func(9);
    obj1.func(9.88);
    obj1.func(1,2);
    return 0;
}