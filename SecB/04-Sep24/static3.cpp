#include <iostream>
using namespace std;
int count(){
static int i = 0;
  i++;
  return i;
}

int main(){
  int j;
  for(j=0;j<10;j++){
    cout<<count()<<endl;
  }
  return 0;
}




