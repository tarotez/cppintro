/* new_instance.cpp */
#include <iostream>
using namespace std;

class person{
public:
  string name;
};

class ticket{
public:
  int id;
  person* user;
  ticket(){user = new person;}
};

int main()
{
  int ticketNum;
  cout << "チケットを何枚購入しますか？ ";
  cin >> ticketNum;
  cout << "\n";
  ticket* tickets = new ticket [ticketNum];
  for(int i = 0; i < ticketNum; i++){
    tickets[i].id = i+1;
    cout << i+1 << "人目の利用者の名前を入力してください: ";
    cin >> tickets[i].user->name;
  }
  
  cout << "\nチケット利用者一覧：\n";
  for(int i = 0; i < ticketNum; i++){   
    cout << " " << tickets[i].id << " : " << tickets[i].user->name << "\n";
  }
  cout << "\n"; 
}



