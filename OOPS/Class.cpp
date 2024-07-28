#include<iostream>
using namespace std;

class hero{
  //prop
  public:
  int health;
  char level;

  //def
  hero(){
    cout<<"def cons called"<<endl;
  }
  //para
  hero(int health, char level){
   this-> health = health;
    this->level = level;
  }

};

void print(){
    
}

int main(){
//   hero h1;
// hero *h1 = new hero;
hero suresh(70,'A');
suresh.print();
hero ritesh(suresh);
ritesh.health = suresh.health;
ritesh.level = suresh.level;
ritesh.print();

//   cout<<"size: "<< sizeof(h1)<<endl;
  return 0;
}