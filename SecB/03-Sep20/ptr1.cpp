#include <cstdio>
using namespace std;
int main(){
  char c = 'A';
  printf("%c %d %c %d\n", c, c , c+1 , c+1);
  int* p = (int*)16;
  int i = 16;
  printf("%d    %u\n", i, p );
  i++;
  p++;
  printf("%d    %u\n", i, p );

  return 0;
}