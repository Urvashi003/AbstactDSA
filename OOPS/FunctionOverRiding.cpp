#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void getInfo(){
        cout<<"MEIN PARENT HU"<<endl;
    }
};

class Child: public Parent{
   public:
   void getInfo(){
    cout<<"MEIN CHILD HU"<<endl;
   }
};

int main(){
    Child c1;
    c1.getInfo();
    Parent p1;
    p1.getInfo();
}