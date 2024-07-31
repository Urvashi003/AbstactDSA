#include<bits/stdc++.h>
using namespace std;

// void func(){
//     static int x =0;
//     cout<<"value of x: "<<x<<endl;
//     x++;
// }

// int main(){
//     func();
//     func();


// }

// class A{
//     public:
//     int x;
    
//     void incX(){
//         x=x+1;
//     }
// };

// int main(){
//     A obj;
//     obj.x=0;
//     cout<<obj.x<<endl;
//     cout<<obj.x<<endl;
    
    


// }

class ABC{
    public:
    ABC(){
        cout<<"cons"<<endl;
    }
    ~ABC(){
        cout<<"des"<<endl;
    }

};

int main(){
    if(true){
        // ABC obj;
        static ABC obj;
    }
    cout<<"end of main"<<endl;

    return 0;
}