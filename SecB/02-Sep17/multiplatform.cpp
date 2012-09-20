#include "multiplatform.h"

#if PLT == LX


int whatever(double, int){
  // linux way


}


#elif PLT == VC

int whatever(double, int){
  // Visual c way


}



#elif PLT == BC

int whatever(double, int){
  // Borland way


}




#elif PLT == MC

int whatever(double, int){
  // Mac way


}


#endif

