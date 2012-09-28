#include <iostream>
using namespace std;
void noreturn4me(){
}

void copymem(void* des, void* src, unsigned size){
  char* cdes = (char*)des;
  char* csrc = (char*)src;
  for(unsigned i=0;i++<size;*cdes++ = *csrc++);
}

int main(){
  double s=2345.6789;
  double d;
  copymem(&d,&s, sizeof(double));
  cout<<d<<endl;
}

