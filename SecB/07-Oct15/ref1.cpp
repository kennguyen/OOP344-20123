#include <iostream>
using namespace std;
int& ref(int& R){
  return R;
}

int main(){
  int A = 10;
  ref(A) = 100;
  ref(A) = ref(A) + 200;
  cout<<A<<endl;
  return 0;
}