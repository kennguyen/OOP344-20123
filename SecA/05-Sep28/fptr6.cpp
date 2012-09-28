#include <iostream>
using namespace std;

bool validYear(int year){
  bool res = false;
  if(year >= 2010 && year <= 2020){
    res  = true;
  }
  return res;
}

bool validMonth(int mon){
  return mon > 0 && mon <=12;
}

bool validCCV(int ccv){
  return ccv >= 100 && ccv <= 999;
}


int getInt(const char* prompt, bool (*valid)(int)){
  int num = 0;
  char newline = 0;
  bool done = false;
  cout<<prompt<<"> ";
  while(!done){
    cin >> num;
    if(!cin.fail()){
      newline = cin.get();
      if(newline != '\n'){
        cout<<"Extra chars after number, try again: ";
        cin.ignore(100, '\n');
      }
      else if(!valid(num)){
        cout<<"Invalid value, "<<prompt<<" again: ";
      }
      else{
        done = true;
      }
    }
    else{
      cin.clear();
      cin.ignore(100, '\n');
      cout<<"Invlid number, try again:";
    }
  }
  return num;
}
int main(){
  int year = 0, mon = 0, ccv= 0;
  cout<<"Please enter expiry date for your creditcard;\n";
  year = getInt("Enter Year",validYear);
  mon = getInt("Enter Month", validMonth);
  ccv = getInt("Enter CCV", validCCV);
  cout<<" your card expiry is "<< mon<<"/"<<year<<" and your ccv is: "<<ccv<<endl;
  return 0;
}