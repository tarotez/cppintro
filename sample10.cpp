#include <iostream>
using namespace std;

class timePoint{
  int hour;
  int minute;
  timePoint(int y, int m, int d, int h, int m){
    year = y; month = m; day = d; hour = h; minute = m;
  }
};
  
class ticket{
public:
  string origin;
  string destination;
  timePoint departureTime;
  timePoint arrivalTime;
  ticket(string o, string d, timePoint dT, timePoint aT){
    origin = o; destination = d;
  }   
};

void addressbook::addFriend(string name){
  friends[numberOfFriends].name = name;
  numberOfFriends++;
}

void addressbook::listFriends(){
  for(int i = 0; i < numberOfFriends; i++){
    cout << friends[i].name << "\n";
  }      
}

int main()
{
  addressbook abook;
  string name;

  while(1){
    cout << "Type in a friend's name (or type in \"quit\" to finish): ";
    cin >> name;
    //   cout << "name.length() = " << name.length() << "\n";
    if(name == "quit"){break;}
    abook.addFriend(name);
  }

  cout << "\nFriends are:\n";
  abook.listFriends();  
}



  
