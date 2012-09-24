#include <iostream>
using namespace std;
void bar(int val = 79, char ch = '=')
int main(){
  bar(15);
  bar();   // defaulted bar
  bar(30, '-');
  return 0;
}
void bar(int val, char ch){
  int i;
  for(i=0;i<val;i++){
    cout<<ch;
  }
  cout<<endl;
}

