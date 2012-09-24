#include <iostream>
using namespace std;
void bar(int val, char ch){
  int i;
  for(i=0;i<val;i++){
    cout<<ch;
  }
  cout<<endl;
}
void bar(int val){
  bar(val, '=');
}
void bar(){
  bar(79);
}

int main(){
  bar(15);
  bar();   // defaulted bar
  bar(30, '-');
  return 0;
}