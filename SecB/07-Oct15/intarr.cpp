#include "intarr.h"

IntArr::IntArr(unsigned int size){\
  this->_size = size;
  _data = new int[size];
}

IntArr::~IntArr(){
  delete[] _data;
}

int& IntArr::operator[](unsigned int index){
  return _data[index%_size];
}
unsigned int IntArr::size()const{
  return _size;
}