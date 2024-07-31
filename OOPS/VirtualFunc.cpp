#include<bits/stdc++.h>
using namespace std;

class Parent{
  public:
  virtual void Hello(){
    cout<<"parent huuuu"<<endl;
  }
};

class Child : public Parent{
    public:
    void Hello(){
        cout<<"mein child huuuuuu"<<endl;
    }
};

int main(){
    Parent P1;

    P1.Hello();

}