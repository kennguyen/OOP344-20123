#include <iostream>
using namespace std;
void noreturn4me(){
}

void copymem(char* des, char* src, unsigned size){
  for(unsigned i=0;i++<size;*des++ = *src++);
}

int main(){
  double s=2345.6789;
  double d;
  copymem((char*)&d,(char*)&s, sizeof(double));
  cout<<d<<endl;
}

