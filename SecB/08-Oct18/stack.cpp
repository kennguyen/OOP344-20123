#include <iostream>
using namespace std;

class Stack;

class Node{
  int _data;
  Node* _next;
  Node(int data, Node* next = (Node*)0){
    _data = data;
    _next = next;
  }
  friend class Stack;
};


class Stack{
  Node* _top;
public:
  Stack(){
    _top = (Node*)0;
  }
  void push(int data);
  int pop();
  bool isEmpty();
  virtual ~Stack();
};
// to reuse code, to quickly write the code, but because it has function call in it, it is much slower than next
//Stack::~Stack(){
//  while(!isEmpty()){
//    pop();
//  }
//}

// good destructor  
Stack::~Stack(){
  Node* toDel;
  while(toDel = _top){
    _top = _top->_next;
    delete toDel;
  }
}

int Stack::pop(){
  int ret = _top->_data;
  Node* ToBeDel = _top;
  _top = _top->_next;
  delete ToBeDel;
  return ret;
}

void Stack::push(int data){
  Node* temp = new Node(data, _top);
  _top = temp;
}

bool Stack::isEmpty(){
  return _top == (Node*)0;
}

int main(){
  int i=10;
  Stack S;
  for(;i<=100;i+=10){
    S.push(i);
  }
  // to pop everything out
  //while(!S.isEmpty()){
  //  cout<<S.pop()<<endl;
  //}


  // to pop some out and test the destructor
  for(i=0;i<5;i++){
    cout<<S.pop()<<endl;
  }
  return 0;
}