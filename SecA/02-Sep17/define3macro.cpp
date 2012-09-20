#include <iostream>
using namespace std;
#define PI 3.14159265
#define sum(x,y) x+y
int main(){
  int i = 2;
  int j = 3;
  int k;
  double a = 3.14159265 * 234;
  cout<<a<<endl;
  k = sum(i,j)*4; // k=i+j*4 hence 14 and not 20
  cout<<k<<endl;
  return 0;
}