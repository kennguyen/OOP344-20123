#include "console.h"
using namespace cio;
int main(){
  int ch;
  console.clear();
  console.setPos(10, 10);
  console<<"Please hit a key:";
  console>>ch;
  console.setPos(20, 20);
  console.putChar(ch);
  console.pause();
  return 0;
}