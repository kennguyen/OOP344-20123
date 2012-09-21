#include <iostream>
using namespace std;
int main(){
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int* p = a;
  cout<<*(a+0)<<endl;
  cout<<*(a+1)<<endl;
  cout<<*(a+5)<<endl;
  cout<<p[5]<<endl;
  p++;
  cout<<p[5]<<endl;
  p+=2;
  cout<<p[1]<<endl;
  return 0;
}