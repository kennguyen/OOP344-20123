#include "console.h"
using namespace cio;

int main(){
  int ch = 'x';
  console.setPos(10, 10);
  console<<"**********************";
  console.setPos(11, 10);
  console<<"**********************";
  console.setPos(12, 10);
  console<<"**********************";
  console.pause();
  console.display("this is a test", 11, 11, 20);
  console.pause();
  console.setPos(10, 10);
  console<<"**********************";
  console.setPos(11, 10);
  console<<"**********************";
  console.setPos(12, 10);
  console<<"**********************";
  console.display("this is a testthis is a testthis is a test", 11, 11, 20);
  console.pause();
  console.setPos(10, 10);
  console<<"**********************";
  console.setPos(11, 10);
  console<<"**********************";
  console.setPos(12, 10);
  console<<"**********************";
  console.display("this is a testthis is a testthis is a test", 11, 11);
  console.pause();
  return 0;
}