/* command_pattern.cpp */

class command {
public:
  virtual void execute() = 0;
};

class createNewFileCommand : public command {
  void execute(){
    // ここにファイル新規作成の動作を書く。
  };
};

class openFileCommand : public command {
  void execute(){
    // ここにファイルを開く動作を書く。
  };
};

class menuItem {
  command* cmd;
public:
  menuItem(){};
  menuItem(command* c){cmd = c;};
  void onClick(){
    cmd->execute();
  };
};

int main(){
  menuItem* m = new menuItem [2];
  m[0] = menuItem(new createNewFileCommand);
  m[1] = menuItem(new openFileCommand);
  m[0].onClick();
  m[1].onClick();
}
