/* argument_ref.cpp */
#include <iostream>
using namespace std;

void func(int &x){
  x *= 2;
  x += 3;
}

int main(){
  int a = 10;
  func(a);
  cout << a << "\n";
}
