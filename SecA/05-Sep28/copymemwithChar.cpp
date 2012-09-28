#include <iostream>
using namespace std;


void copymem(char* des, char* src, unsigned size){
//  for(unsigned i=0;i++<size;*des++ = *src++);
  for(unsigned i=0;i<size;i++ ){
    des[i] = src[i];
  }
}

int main(){
  double s=2345.6789;
  double d;
  copymem((char*)&d,(char*)&s, sizeof(double));
  cout<<d<<endl;
}

