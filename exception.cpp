/* exception.cpp */
#include <iostream>
using namespace std;

class ex_account_too_long{
public:
  string account;
  ex_account_too_long(string str){account = str;};
  string show(){return "アカウント '" + account + "' は長すぎます。";};
};

int main(){

  string account;
  int accountlenlim = 6;
  cout << "希望アカウントを入力してください（英数字6文字以内）: ";
  cin >> account;

  try{
    if(account.length() > accountlenlim){
      ex_account_too_long ex2long(account);
      throw ex2long;
    }else{
      cout << "\n" << account << "さん、ようこそ！\n\n";
    } 
  }catch(ex_account_too_long e){    
    cout << "\nException: " << e.show() << "\n\n";
  }
}
