/* const_func.cpp */
#include <iostream>
using namespace std;

class myclass{
  int A, B, C;
public:
  int get_sum() const {return A + B + C;};
  myclass(int a, int b, int c){A = a; B = b; C = c;};
};

int main(){  
  myclass m(10, 20, 30);
  cout << "sum = " << m.get_sum() << endl;  
}



