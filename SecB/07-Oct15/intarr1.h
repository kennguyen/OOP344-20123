#ifndef __INTARR_H__
#define __INTARR_H__

class IntArr{
  int* data;
public:
  IntArr(unsigned int size);
  virtual ~IntArr();

  void set(unsigned int index, int value);
  int get(unsigned int index);
};


#endif
