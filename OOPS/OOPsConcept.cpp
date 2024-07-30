#include<bits/stdc++.h>
using namespace std;

class Teacher{
  //members
  public:
  string name;
  string dept;
  string subject;

  private:
  int salary;

public:
  //methods/functions
  void changeDept(string newdept){
    dept = newdept;
  }

  void setSalary(int s){
    salary=s;
  }
  int getSalary(){
    return salary;
  }
  Teacher(){
    cout<<"hi i am cons"<<endl;
    dept= "CS";
  }

// Teacher(string n, string d, string sub, int sal){
//    name= n;
//    dept = d;
//    subject =sub;
//    salary = sal;
// }

Teacher(Teacher &Oriobj){
    cout<<"copy cons"<<endl;
    this->name = Oriobj.name;
    this->dept= Oriobj.dept;


}

void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"dept: "<<dept<<endl;
}

  ~Teacher(){
    cout<<"hi am des"<<endl;
  }
};

int main(){
   Teacher t1;
   t1.name = "Urvashi";
//    t1.subject = "C++";
//    t1.dept = "CS";
//    t1.setSalary(2000000);
//    cout<<t1.getSalary()<<endl;
//    cout<<t1.dept<<endl;

//    cout<<t1.name<<endl;

//PARAMERTIZED CONS
// Teacher t1("Urvashi","CS","DSA",2000000);
// t1.getInfo();

Teacher t2(t1);
t2.getInfo();



   return 0;
}