#include <iostream>
using namespace std;
int i = 0;
int count(){
  i++;
  return i;
}

int main(){
  int j;
  int i = 5;
  for(j=0;j<10;j++){
    int i = 15;
    cout<<count()<<" "<<i++<<endl;
  }
  cout<<i<<endl;
  return 0;
}

