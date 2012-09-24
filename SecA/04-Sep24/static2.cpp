#include <iostream>
using namespace std;
int i = 0;
int count(){
  i++;
  return i;
}

int main(){
  int j;
  for(j=0;j<10;j++){
    cout<<count()<<endl;
  }
  cout<<i<<endl;
  return 0;
}



