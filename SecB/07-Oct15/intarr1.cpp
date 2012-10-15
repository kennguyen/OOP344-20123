#include "intarr.h"

IntArr::IntArr(unsigned int size){
  data = new int[size];
}

IntArr::~IntArr(){
  delete[] data;
}

void IntArr::set(unsigned int index, int value){
  data[index] = value;
}
int IntArr::get(unsigned int index){
  return data[index];
}
