/* return pointer */
#include <iostream>
using namespace std;

class cls{
public:
  int x;
  int* f(){return &x;};
};

int main(){
  cls a;
  *(a.f()) = 200;
  cout << "a.x = " << a.x << "\n";
};
