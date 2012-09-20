#include <iostream>
using namespace std;

#define max(a, b) ((a)>(b)?(a):(b))

#define make(v, t) t v

#ifdef DEBUG
#undef DEBUG
#endif

#define DEBUG

int main(){
  make(a, int) = 2;
  // int a = 2;
#ifdef DEBUG
  cout<<max(a, 10)<<endl;
#endif
  return 0;
}

