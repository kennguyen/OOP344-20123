#include "intarr.h"

IntArr::IntArr(unsigned int size){
  data = new int[size];
  this->size = size;
}
IntArr::~IntArr(){
  delete[] data;
}
int& IntArr::operator[](unsigned int index){
  return data[index%size];
}
