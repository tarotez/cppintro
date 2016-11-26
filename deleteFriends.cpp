#include <iostream>
using namespace std;

class person{
public:
  string address;
  string id;
  string name; 
};

class addressbook{
  person* friends;
  int numberOfFriends;
public:
  addressbook();
  ~addressbook();
  void listFriends();
  void addFriend(string name);
  person find(string query);
};

// constructor
addressbook::addressbook(){
  numberOfFriends = 0;
  friends = new person [100];
}

addressbook::~addressbook(){
  delete[] friends;
}

void addressbook::addFriend(string name){
  friends[numberOfFriends].name = name;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << "\n";
  }      
}

person addressbook::find(string query){
  for(int i = 0; i < numberOfFriends; i++){
    if(friends[i].name == query){
      return friends[i];
    }
  }
  person noone;
  return noone;
}

int main()
{
  addressbook abook;
  string name;
  string query;

  while(1){
    cout << "住所録に登録する名前を入力してください（終了するにはquitと入力してください）: ";
    cin >> name;
    if(name == "quit"){break;}
    abook.addFriend(name);
  }

  cout << "\n名前リスト:\n";
  abook.listFriends();  

  cout << "検索：";
  cin >> query;
  person res = abook.find(query);
  cout << res.address;

}


  
