#include <iostream>
using namespace std;
int& ref(int& I){
  return I;
}
int& crazy(){
  static int i=0;
  return i;
}
int main(){
  int A = 10;
  ref(A) = 100;
  ref(A)++;
  crazy() = 100;
  crazy()--;
  cout<<A<<endl;
  cout<<crazy()<<endl;
  return 0;
}