#include <iostream>
using namespace std;

int main(){
  int ar[10] = {100,200,300,400,500,600,700,800,900,1000};
  int* p = ar;
  cout<<*ar<<endl;
  cout<<*(ar+0)<<endl;
  cout<<*(ar+1)<<endl;
  cout<<p[3]<<endl;
  cout<<(unsigned)p<<endl;
  cout<<p<<endl;
  p+=2;
  cout<<p[5]<<endl;
  cout<<(unsigned)p<<endl;
  cout<<p<<endl;
  return 0;
}