/* friend.cpp */
#include <iostream>
using namespace std;

class locked{
  string content;
  string correct_code;
public:
  friend string access(locked l, string key);
  locked(){content = "インストールキーは○○○です。"; correct_code = "FFF888";};
};

string access(locked l, string c){
  if(c == l.correct_code){
    return l.content;
  }else{
    return "";
  }
};

int main(){
  string code;
  locked lckd;
  cout << "コードを入力してください。\n";
  cin >> code;
  cout << access(lckd, code) << "\n";
}
