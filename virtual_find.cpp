#include <iostream>
using namespace std;


class arb_node{
  virtual bool find(string query);
};

class person{
  string name;
public:
  bool find(string query){return name == query;}
}

int main(){

}
