#include<bits/stdc++.h>
using namespace std;

//STATIC

class Student{
  public:
  string name;
  double cgpa;
  
  Student(string n, double cgpa){
    this->name = n;
    this->cgpa = cgpa;
  }
  Student(Student &obj){
    this->name = obj.name;
    this->cgpa = obj.cgpa;
  }

  void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<cgpa<<endl;
  }
};

int main(){
  Student s1("Urvashi", 9.5);
  Student s2(s1);
  s2.getInfo();
}