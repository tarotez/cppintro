/* typeid.cpp */
#include <iostream>
#include <typeinfo>
using namespace std;

class myclass{
  int a, b, c;
};

int main(){  
  myclass inst;
  cout << "typeid = " << typeid(inst).name() << endl;
}



