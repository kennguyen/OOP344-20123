#include <cstdio>
using namespace std;
void print(int (*x)[10], unsigned int size);
int main(){
  int a[3][10] = {{1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000}};
  printf("%d   %d\n", a[2][5],   *(*(a+2)+5));
  // x[2][3][34][5][6]
  // *(*(*(*(*(x+2)+3)+34)+5)+6)

  return 0;
}


