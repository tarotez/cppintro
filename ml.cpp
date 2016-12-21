/* ml.cpp */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class matrix {
};

class vector {
};

class regressor {
public:
  virtual void fit(matrix train_x, vector train_y) = 0;
  virtual vector predict(matrix test_x) = 0;
};

class linearRegressor : public regressor {
  vector parameters;
public:
  void fit(matrix train_x, vector _train_y){
  };
  vector predict(matrix test_x){
    vector est_y;
    return est_y;
  };
};

class polyRegressor : public regressor {
  vector parameters;
public:
  void fit(matrix train_x, vector _train_y){
  };
  vector predict(matrix test_x){
    vector est_y;
    return est_y;
  };
};

class gpRegressor : public regressor {
  vector parameters;
public:
  void fit(matrix train_x, vector _train_y){
  };
  vector predict(matrix test_x){
    vector est_y;
    return est_y;
  };
};

class noRegressorException {
};

class regressorCreator {
public:
  static regressor* create(string regressorType){
    if(regressorType == "linear"){
      return new linearRegressor;
    }else if(regressorType == "poly"){
      return new polyRegressor;
    }else if(regressorType == "gp"){
      return new gpRegressor;
    }else{
      throw new noRegressorException;
    }
  }
};

int main()
{
  string regressorType;
  matrix train_x, test_x;
  vector train_y, est_y;
  regressorCreator rc;
  cout << "どの回帰モデルを使いますか？" << endl;
  cin >> regressorType;
  regressor* rp = rc.create(regressorType);
  rp->fit(train_x, train_y);
  est_y = rp->predict(test_x);
}
