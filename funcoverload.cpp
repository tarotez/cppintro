/* overload.cpp */
#include <iostream>
using namespace std;

class vector {
public:
  int[] elements;
  vector(int[] array);
  int dim(){return sizeof(elements)/sizeof(*elements)};
};

// constructor
vector::vector(int[] array){
  elements = array;
}

// operator overload
vector vector::operator+(x, y){
  int vdim = x.dim();
  vector z(int[] array = new int[vdim]);
  for(int i = 0; i < vdim; i++){
    z(i) = x(i) + y(i);
  }
  return z;
}

vector vector::operator[](x, i){
  return x.elements[];
}

int main()
{

  // define a, b and compute c
  vector a([2,3,5]), b([7,5,9]);
  vector c = a + b;

  // print out c
  cout << "c = [";  
  for(int i = 0; i < c.dim(); i++){
    cout << c(i);
    if (i < c.dim() - 1){cout << ", ";}
  }  
  cout << "]\n";
  
}



  
