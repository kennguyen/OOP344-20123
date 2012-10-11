#include "console.h"


namespace cio{
  unsigned int CIO_TABSIZE = 4;
  Console console;
  Console::Console():tabsize(CIO_TABSIZE){
 
  }

  void Console::display(const char* str, int row, int col, int fieldLen){
    setPos(row, col);
    if(fieldLen == 0){
      (*this)<<str;
    }
    else{
      int i;
      for(i=0;i<fieldLen && str[i];i++){
        putChar(str[i]);
      }
      for(;i<fieldLen;i++){
        putChar(SPACE);
      }
    }
  }

  int  Console::edit(char *str, int row, int col, int fieldLength, int maxStrLength, 
         bool* insertMode, int* strOffset, int* curPosition,  
         bool IsTextEditor, bool ReadOnly ){
    return 0;
  }

  Console& operator>>(Console& cn, int& ch){
    ch  = cn.getKey();
    return cn;
  }
  Console& operator<<(Console& cn, char ch){
    cn.putChar(ch);
    return cn;
  }
  Console& operator<<(Console& cn, const char* str){
    while(*str){
      cn<<*str++;
    }
    return cn;
  }
} // end namespace cio