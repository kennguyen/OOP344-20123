#include <iostream>
using namespace std;
int main(){
  int a[10] = {-34,5,-32,0,67,0,9,-2,0,4};
  int z;
  int n;
  int i;
  for(i=0,z = n = 0;i<10;i++){
    z += !a[i];
    n += (a[i] < 0);
  }
  cout<<z<<endl;
  cout<<n<<endl;
  return 0;
}