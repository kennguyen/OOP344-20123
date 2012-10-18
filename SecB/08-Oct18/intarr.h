#ifndef __INTARR_H__
#define __INTARR_H__

class IntArr{
  int* _data;
  unsigned int _size;
public:
  bool Dynamic;
  IntArr(unsigned int size, bool dynamic = true);
  virtual ~IntArr();
  int& operator[](unsigned int index);
  unsigned int size()const;
  void resize(unsigned int newSize);
};


#endif
