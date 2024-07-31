#include<bits/stdc++.h>
using namespace std;


// class Person{
// protected:
//   string name;
//   int age;

//   Person(){

//   }
// };

// class Student : protected Person{
//     public:
//     int rollno;
//     void getInfo(){
//         cout<<"name-> "<<name<<endl;
//         cout<<"age-> "<<age<<endl;
//         cout<<"roll-no-> "<<rollno<<endl;
//     }
// };

// int main(){
//     Student s1;
//     s1.name ="urvashi";
//     s1.age = 20;
//     s1.rollno = 124;
//     s1.getInfo();
// }

//PARAMETER CONS

class Person{
  public:
  string name;
  int age;

  Person(string name, int age){
    this->name = name;
    this->age = age;
  }

};

class Student : public Person{
  public:
  int rollNo;

  Student(string name, int age,int rollNo) : Person(name,age){
     this->rollNo = rollNo;
  }
    void getInfo(){
        cout<<"name-> "<<name<<endl;
        cout<<"age-> "<<age<<endl;
        cout<<"roll-no-> "<<rollNo<<endl;
    }

};

int main(){
    Student s1("Urvashi", 20, 124);
    s1.getInfo();

}

