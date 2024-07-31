#include<bits/stdc++.h>
using namespace std;

class Shape{
  public:
  virtual void draw() =0; //pure virtual func

};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"circleee hu"<<endl;
    }
};

int main(){
    Circle C1;
    C1.draw();
}
