/* overload_vec3d.cpp */
#include <iostream>
using namespace std;

class vec3d {
public:
  int d1, d2, d3;
  vec3d(int i1, int i2, int i3){d1 = i1; d2 = i2; d3 = i3;};
  vec3d(){};
  string show(){return "(" + to_string(d1) + "," + to_string(d2) + "," + to_string(d3) + ")";};
};

// operator overload for +
vec3d operator+(vec3d u, vec3d v){
  vec3d w;
  w.d1 = u.d1 + v.d1;
  w.d2 = u.d2 + v.d2;
  w.d3 = u.d3 + v.d3;
  return w;
}

int main()
{
  vec3d a(2,3,5), b(7,5,1);
  cout << "a = " << a.show() << "\n";
  cout << "b = " << b.show() << "\n";
  cout << "a + b = " << (a+b).show() << "\n";
}
