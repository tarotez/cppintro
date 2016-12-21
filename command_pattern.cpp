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
  menuItem(command* c){cmd = c;};
  void onClick(){
    cmd->execute();
  };
};

int main(){
  command* c0 = new createNewFileCommand;
  command* c1 = new openFileCommand;
  menuItem m0(c0);
  menuItem m1(c1);
}
