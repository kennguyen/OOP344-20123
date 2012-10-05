#include "console.h"


namespace cio{
  using namespace bio;
  unsigned int CIO_TABSIZE = 4;
  Console console;

  Console::Console(){
  }

  void Console::display(const char* str, int row, int col, int fieldLen){
    console.setPos(row,col);
    if(fieldLen){
      int i;
      for(i=0;i<fieldLen && str[i];i++){
        this->putChar(str[i]);
      }
      for(;i<fieldLen;i++){
        this->putChar(' ');
      }
    }
    else{
      (*this)<<str;
    }
  }
  int  Console::edit(char* str, int row, int col, 
            int fieldLength, int maxStrLength, 
            bool* insertMode, int* strOffset, int* curPosition,  
            bool IsTextEditor, bool ReadOnly){
    return 0;
  }

  Console& operator>>(Console& C, int& ch){
    ch = C.getKey();
    return C;
  }
  Console& operator<<(Console& C, char ch){
    C.putChar(ch);
    return C;
  }
  Console& operator<<(Console& C, const char* str){
    for(int i=0;str[i];i++){
      C.putChar(str[i]);
    }
    return C;
  }



} // end namespace cio