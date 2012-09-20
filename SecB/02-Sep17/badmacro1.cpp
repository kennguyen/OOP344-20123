#include <iostream>
using namespace std;
#define sum(x,y) x+y
int main(){
  int a = 2;
  int b = 3;
  double d = 2.345;
  double e = 456.788;
  cout<<(sum(a,b)*4)<<endl;  
  // cout<<(a+b*4)<<endl; hence 14 and not 20
  cout<<(sum(d,e)*4)<<endl;  
  // cout<<(a+b*4)<<endl; hence 1829.5 and not 1836.53
  return 0;
}

