#include <cstdio>
using namespace std;
int add(int , int );
int prnch(int , int );

int main(){
  int (*fptr)(int, int);
  int x = 10;
  int y = 20;
  int z;
  fptr = add;
  // in C: z = (*fptr)(x, y)
  z = fptr(x, y);
  printf("ret: %d\n", z);

  fptr = prnch;
  x = 'X';
  z = fptr(x, y);
  printf("ret: %d\n", z);

  return 0;
}
int add(int a, int b){
  return a + b;
}
int prnch(int ch, int n){
  while(n--){
    putchar(ch);
  }
  putchar('\n');
  return n;
}
