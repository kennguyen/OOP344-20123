#include <cstdio>
using namespace std;
void prn(int* Array, unsigned int size);
void prn(int Array[][10], unsigned int size);
int main(){
  int a[3][10] = {{1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000}};
  int b[10] = {1,2,3,4,5,6,7,8,9,10};
  int c[9][10] = {{1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000},
                  {1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000},
                  {1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000}};
  printf("%u\n", a);
  printf("%u\n", a+1);
  prn(b,10);
  prn(a[1], 15);
  printf("aaaaaaaaaaaaa\n");
  prn(a,3);
  printf("bbbbbbbbbbbbbb\n");
  prn(c,9);
  return 0;
}


void prn(int* x,unsigned int size){
  for(int i=0;i<size;i++){
    printf("%d ", x[i]);
//    printf("%d ", *(x+i));
  }
}
void prn(int x[][10], unsigned int size){
  for(int i=0;i<size;i++){
    for(int j=0;j<10;j++){
      printf("%d ", x[i][j]);
    }
    printf("\n");
  }
}
