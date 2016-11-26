/* multi_inherit.cpp */
#include <iostream>
using namespace std;

class watch{
public:
  int hour, minute;
  watch(int h, int m){hour = h; minute = m;};
};

class messenger{
public:
  string message;
  messenger(string msg){message = msg;}
};

class smartwatch : public watch, public messenger{
public:
  smartwatch(int h, int m, string msg) : watch(h,m), messenger(msg){};
};

int main(){  
  smartwatch sw(15, 30, "Hello user!");
  cout << sw.message << " (It's now " << sw.hour << ":" << sw.minute << ")\n";
};
