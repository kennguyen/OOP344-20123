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
    bool done = false;
    int key = 0;
    int lastOffset = 0;
    int i = 0;  // index to do loops
    while(!done){
      lastOffset= *strOffset;
      // displaying the interface
      display(str + *strOffset, row, col, fieldLength);
      setPos(row, col + *curPosition);
      // end displaying the interface
      switch(key = getKey()){
      case LEFT:
        if(*curPosition > 0){
          (*curPosition)--;
        }
        else if(*strOffset > 0){
          (*strOffset)--;
        }
        else{
          // beep
        }
        break;
      case INSERT:
        *insertMode = !(*insertMode);
        break;
      case HOME:
        *strOffset = *curPosition = 0;
        break;
      case DEL:
        for(i= *curPosition + *strOffset; str[i];i++){
          str[i] = str[i+1];
        }
        break;
      case ESCAPE:
        done = true;
        break;
      default:
        if(key >=32 && key <= 126){  // I have a printable character to work with
          if(*insertMode){ // edit in insert mode

          }
          else{ // edit in overstrike mode
            str[*strOffset + *curPosition] = key;
            (*curPosition)++;
          }
        }
        if(lastOffset != *strOffset){
          done = true;
        }
      } // end while(!done)
    }
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