#include<bits/stdc++.h>
using namespace std;

class Student{
   public:
   string name;
   double* cgpaptr;

   Student(){
     cout<<"i am def con"<<endl;
   }

   Student(Student &obj){
    this->name = obj.name;
    cgpaptr= new double;
    *cgpaptr = *obj.cgpaptr;
   }

   void getInfo(){
    cout<<name<<endl;
    cout<<*(cgpaptr)<<endl;
   }
};

int main(){
  Student s1;
  s1.name = "Urvashi";
  *(s1.cgpaptr) = 9.9;
  Student s2(s1);
  s2.getInfo();
}