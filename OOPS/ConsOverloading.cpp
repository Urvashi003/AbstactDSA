#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int rollNo;

    Student(){
        cout<<"Non para"<<endl;
    }

    Student(string name, int rollNo){
        this->name = name;
        this->rollNo = rollNo;
        cout<<"para"<<endl;
    }

};

int main(){
    Student s1("Urvashi", 124);
    Student s2;
}