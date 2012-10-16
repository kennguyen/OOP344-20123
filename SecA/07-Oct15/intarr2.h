#ifndef __INTARR_H__
#define __INTARR_H__

class IntArr{
  int* data;
public:
  IntArr(unsigned int size);
  virtual ~IntArr();
  int& element(unsigned int index);
};




#endif