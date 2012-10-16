#include "intarr.h"

IntArr::IntArr(unsigned int size){
  data = new int[size];
}
IntArr::~IntArr(){
  delete[] data;
}
int& IntArr::element(unsigned int index){
  return data[index];
}
