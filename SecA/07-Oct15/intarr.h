#ifndef __INTARR_H__
#define __INTARR_H__

class IntArr{
  int* data;
  unsigned int size;
public:
  IntArr(unsigned int size);
  virtual ~IntArr();
  int& operator[](unsigned int index);
};




#endif