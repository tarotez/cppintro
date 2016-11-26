/* arb_swap.cpp */
#include <iostream>
using namespace std;

template <class X> void swap_generic(X &a, X &b)
{
  X temp;

  temp = a;
  a = b;
  b = temp;
}

int main(){

  int i = 12, j = 53;
  string x = "Hello", y = "Good night";

  cout << "置換前：i = " << i << ", j = " << j << endl;
  cout << "置換前：x = " << x << ", y = " << y << endl;
    
  swap_generic(i, j);
  swap_generic(x, y);
  cout << "\n";

  cout << "置換後：i = " << i << ", j = " << j << endl;
  cout << "置換後：x = " << x << ", y = " << y << endl;

  return 0;
}
