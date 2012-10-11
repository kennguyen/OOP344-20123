#pragma once

#ifndef __FS_CONSOLE_H__
#define __FS_CONSOLE_H__

#include "bconsole.h"

namespace cio{
  class Console: public bio::BConsole{
    unsigned int& tabsize;
  public:
    Console();
    void display(const char* str, int row, int col, int fieldLen=0); 
    int  edit(char *str, int row, int col, int fieldLength, int maxStrLength, 
         bool* insertMode, int* strOffset, int* curPosition,  
         bool IsTextEditor = false, bool ReadOnly = false);

  }; // end class Console


  Console& operator>>(Console& cn, int& ch);
  Console& operator<<(Console& cn, char ch);
  Console& operator<<(Console& cn, const char* str);

  extern unsigned int CIO_TABSIZE;
  extern Console console;
} // end namespace cio
#endif // end console.h
