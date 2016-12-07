/* generic_max.cpp */
#include <iostream>
#include <random>
#define N 4
#define RMAX 10
using namespace std;

// defines a generic class
template <class X> class myArray{
public:
  X data[N];
  X max();
};

// defines a generic function 
template <class X> X myArray<X>::max(){
  X largest = data[0];
  for(int i = 1; i < sizeof(data)/sizeof(data[0]); i++){
    if(largest < data[i]){
      largest = data[i];
    }
  }
  return largest;
}

int main(){
  random_device rnd;
  mt19937 mt(rnd()); 
  uniform_real_distribution<> rnd_real(0, 1);
  myArray<int> forInt;
  myArray<double> forDouble;
  cout << endl << "forInt.data = ";
  for (int i = 0; i < N; ++i) {
    forInt.data[i] = rnd() % RMAX;
    cout << forInt.data[i] << " ";
  }
  cout << endl << "forDouble.data = ";
  for (int i = 0; i < N; ++i) {
    forDouble.data[i] = rnd_real(mt);
    cout << forDouble.data[i] << " ";
  }
  cout << endl << endl << "forInt.max() = " << forInt.max() << endl;
  cout << "forDouble.max() = " << forDouble.max() << endl << endl;
}
