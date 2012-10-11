#include "console.h"
using namespace cio;




int main(){
  char text[100] = "Hello how are you this morning!ABCDEFGHIJKLMNOPQRST";
  bool insertMode = true;
  int curpos = 8;
  int offset = 10;
  text[31] = 0;
  console.setPos(10, 20);
  console<<"*****************";
  console.setPos(11, 20);
  console<<"*****************";
  console.setPos(12, 20);
  console<<"*****************";
  console.edit(text, 11, 21, 15, 40, &insertMode, &offset, &curpos, false, false);
  console.setPos(15,20);
  console<<text;
  console.pause();
  return 0;
}