/* sample 7 */
#include <iostream>
using namespace std;

class person{
protected:
  string name;
  string ssn;
public:
  person(){};
  // person(string n){name = n;};
  void setName(string n){name = n;};
  virtual void requestData(){
    cout << "社会保険番号を入力してください。\n";
    cin >> ssn;
  };
  virtual void showData(){};
};

class member : public person{
  int memberid;
public:
  // member(string n) : person(n){};
  void requestData(){
    cout << "会員番号を入力してください。\n";
    cin >> memberid;
  };
  void showData(){
    cout << name << "（会員）: " << memberid << "\n";
  };
};

class nonmember : public person {
  string email;
public:
  // nonmember(string n) : person(n){};
  void requestData(){
    cout << "メールアドレスを入力してください。\n";
    cin >> email;
  };
  void showData(){
    cout << name << "（非会員）: " << email << "\n";
  };
};

int main()
{
  int parNum, i;
  string name, mtype;
  cout << "参加者を何人登録入しますか？ ";
  cin >> parNum;
  par_node* p = new par_node;
  par_node* q = p;

  for(i = 0; i < parNum; i++){
    cout << "名前を入力してください。\n";
    cin >> name;
    cout << "会員ですか？(y/n) \n";
    cin >> mtype;
    if(mtype == "y"){
      q->participant = new member;
    }else{
      q->participant = new nonmember;
    }
    q->participant->setName(name);
    q->participant->requestData();
    q->next = new par_node;
    q = q->next;
  }
  
  cout << "\n参加者一覧：\n";
  q = p;
  for(i = 0; i < parNum; i++){
    q->participant->showData();
    q = q->next;
  }
  cout << "\n"; 
}
