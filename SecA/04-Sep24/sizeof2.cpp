#include <iostream>
using namespace std;
struct Rec{
  double d;
  int i;
};
struct RRec{
  char a;
  double d;
  int i;
}; 
struct RRRec{
  double d;
  int i;
  char a;
}; 

int main(){
  cout<<sizeof(Rec)<<endl;
  cout<<sizeof(RRec)<<endl;
  cout<<sizeof(RRRec)<<endl;
  return 0;
}

