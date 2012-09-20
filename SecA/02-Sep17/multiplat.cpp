#include "multiplat.h"

#if PLT == LX

int MutiPltFunc(double a, int b){

  //linux code goes here
  return 0;
}

#elif PLT == VC

int MutiPltFunc(double a, int b){

  //Visual C code goes here
  return 0;
}

#elif PLT == BC

int MutiPltFunc(double a, int b){

  //BC C code goes here
  return 0;
}

#elif PLT == MC

int MutiPltFunc(double a, int b){

  //MAC C code goes here
  return 0;
}

#endif


