/*
Use of reinterpret class
*/

#include <iostream>

class MyClass{
  public : 
    int a;
    int b;
    char c;
    bool d;
};

int main(){
  MyClass className;

  className.a = 2;
  className.b = 4;
  className.c = 'a';
  className.d = true;

  int *p = reinterpret_cast<int*>(&className);
  for(int i=0; i<2; i++){
    std::cout << "itr " << i+1 << " value : " << *p << std::endl;
    p++;
  }
  char *e = reinterpret_cast<char*>(p);
  std::cout << *e;
  return 0;
}