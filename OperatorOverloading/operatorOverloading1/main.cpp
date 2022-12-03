#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
  Mystring a{"Hello"};
  Mystring b;
  cout <<"a : " << a.get_str() << endl;
  b=a;
   cout << b.get_str() << endl;
  b = "This is a test;";
  cout << b.get_str() << endl;
  return 0;
}