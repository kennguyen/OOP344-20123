#include <cstdio>
using namespace std;

int main(){
  int i = 4;
  int* j = (int*)4;
  i++;
  j++;
  printf("%d   %u\n", i, j);
  return 0;
}