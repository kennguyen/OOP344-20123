#include <iostream>
using namespace std;
#define PI 3.14159265
#define sum(x,y) ((x)+(y))

#define max(x,y) ((x)<(y)?(y):(x))

#define create(v, t) t v


int main(){
  create(i, int) = 2;
  // expanded to: int i = 2;
  int j = 3;
  int k;
  double a = 3.14159265 * 234;
  cout<<a<<endl;
  k = sum(i,j)*4; // k=(i+j)*4 hence 14 and not 20
  cout<<k<<endl;
  cout<<max(i,j)<<endl;
  return 0;
}