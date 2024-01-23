// Example program
#include <iostream>
#include <string>

int main()
{
  #define MYNUM 100
  #define twiceProduct(a, b) a*b;
  #define twiceP() MYNUM*MYNUM 
  std::cout << twiceProduct(2, 3);
  std::cout << std::endl;
  std::cout << twiceP() << std::endl;
  
  //errors - to recheack
  //#define myFunc(...) twiceProduct(0, X __VA_OPT__(,) __VA_ARGS__)
  
  //std::cout << myFunc(2, 3);
  //std::cout << std::endl;
  
  
  return 0;
}