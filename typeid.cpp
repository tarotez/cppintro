/* typeid.cpp */
#include <iostream>
using namespace std;

class myclass{
  int a, b, c;
};

int main(){  
  myclass inst;
  cout << "typeid = " << typeid(inst).name() << endl;
}



