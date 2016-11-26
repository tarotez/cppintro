#include <iostream>
using namespace std;

class person{
public:
  string name;
};

int main()
{
  person friends[3];

  for(int i=0; i<3; i++){ 
    cout << i + 1 << "番目の名前は？";
    cin >> friends[i].name;
  }

  cout << "\n名前リスト:\n";
  for(int i=0; i<3; i++){ 
    cout << friends[i].name << "\n";
  }
}



  
