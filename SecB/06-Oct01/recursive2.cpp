#include <iostream>
using namespace std;
void hanoi(int n, char p1, char p2, char p3){
  if (n == 1){
    cout<<p1<<"---->"<<p3<<endl;
  }
  else{
    hanoi(n-1, p1, p3, p2);
    cout<<p1<<"---->"<<p3<<endl;
    hanoi(n-1, p2, p1, p3);
  }
}
int main(){
  hanoi(4, 'A', 'B', 'C');
  return 0;
}