#include "intarr.h"

IntArr::IntArr(unsigned int size, bool dynamic){\
  this->_size = size;
  _data = new int[size];
  Dynamic = dynamic;
}

void IntArr::resize(unsigned int newSize){
  if(Dynamic){
    int* temp = new int[newSize];
    int i;
    for(i=0;i<_size && i<newSize; i++){
      temp[i] = _data[i];
    }
    delete[] _data;
    _data = temp;
    _size = newSize;
  }
}

IntArr::~IntArr(){
  delete[] _data;
}

int& IntArr::operator[](unsigned int index){
  if(index >= _size && Dynamic){
    resize(index * 2>4096?index+4096:index * 2);
  }
  return _data[index%_size];
}
unsigned int IntArr::size()const{
  return _size;
}