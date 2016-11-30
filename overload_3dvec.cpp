/* overload_3dvec.cpp */
#include <iostream>
using namespace std;

class vector {
public:
  int d1, d2, d3;
  vector(int i1, int i2, int i3){d1 = i1; d2 = i2; d3 = i3;};
  string show(){return "[" + d1.tostr + "," + d2 + "," + d3 + "]"};
};

// operator overload
vector vector::operator+(u, v){
  vector w;
  w.d1 = u.d1 + v.d1;
  w.d2 = u.d2 + v.d2;
  w.d3 = u.d3 + v.d3;
  return w;
}

int main()
{
  // define a, b and compute c
  vector a([2,3,5]), b([7,5,9]);
  vector c = a + b;

  // print out a, b, c
  cout << "a = " << a.show();
  cout << "b = " << b.show();
  cout << "c = " << c.show();

}



  
