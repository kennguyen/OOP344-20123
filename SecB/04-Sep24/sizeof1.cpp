#include <iostream>
using namespace std;
void print(int (*x)[10], unsigned int size);
int main(){
  int b[10] = {1,2,3,4,5,6,7,8,9,10};
  int a[3][10] = {{1,2,3,4,5,6,7,8,9,10},
                  {10,20,30,40,50,60,70,80,90,100},
                  {100,200,300,400,500,600,700,800,900,1000}};
  double d;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(d)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(b)<<endl;
  cout<<sizeof(a)<<endl;
  print(a, 3);
  return 0;
}


void print(int (*x)[10], unsigned int size){
  cout<<sizeof(x)<<endl;
  for(int i=0;i<size;i++){
    for(int j=0;j<10;j++){
      cout<<x[i][j]<<" ";
    }
    cout<<endl;
  }
}


