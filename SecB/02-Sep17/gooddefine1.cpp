#include <iostream>
using namespace std;
#define sum(x,y) ((x)+(y))  
int main(){
  int a = 2;
  int b = 3;
  double d = 2.345;
  double e = 456.788;
  cout<<(sum(a,b)*4)<<endl;  
  // cout<<(((a)+(b))*4)<<endl; 20
  cout<<(sum(d,e)*4)<<endl;  
  // cout<<(((d)+(e))*4)<<endl; 1836.53
  //sum(a+b*d, d-e);
  //((a+b*d)+(d-e));
  return 0;
}

