#include <iostream>
using namespace std;


void copymem(void* des, void* src, unsigned size){
  char* csrc = (char*) src;
  for(unsigned i=0;i<size;i++ ){
    ((char*)des)[i] = csrc[i];
  }
}

int main(){
  double s=2345.6789;
  double d;
  copymem(&d,&s, sizeof(double));
  cout<<d<<endl;
}

