#include "console.h"
using namespace cio;

int main(){
  int ch = 'x';
  console.setPos(10, 10);
  console.putChar('X');
  console.setPos(14, 10);
  console<<"Enter a Character:";
  console >> ch;
  console.setPos(20, 50);
  console << ch;
  console.pause();
  return 0;
}