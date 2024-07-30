#include<bits/stdc++.h>
using namespace std;

class Student{
  public:
  string name;
  double* cgpaptr;

  Student(string name, double cgpa){
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
  }

  void getInfo(){
    cout<<"cgpa: "<<*cgpaptr<<endl;
  }
};

int main(){
    Student s1("Urvashi",9.8);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaptr)=9.2;
    s2.getInfo();
    s1.getInfo();


    return 0;

}