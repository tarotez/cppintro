#include <iostream>
using namespace std;

class myclass {
  int a;
public:
  void set_a(int num);
  int get_a();
};

void myclass::set_a(int num){
  a = num;
}

int myclass::get_a(){  
  return a;
}

int main(){

  myclass ob1, ob2;

  ob1.set_a(12);
  ob2.set_a(24);

  cout << ob1.get_a() << "\n";
  cout << ob2.get_a() << "\n";

  return 0;

}
    
    
