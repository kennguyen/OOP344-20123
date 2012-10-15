#ifndef __INTARR_H__
#define __INTARR_H__

class IntArr{
  int* _data;
  unsigned int _size;
public:
  IntArr(unsigned int size);
  virtual ~IntArr();
  int& operator[](unsigned int index);
  unsigned int size()const;
};


#endif
