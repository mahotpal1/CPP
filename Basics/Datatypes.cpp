#include <iostream>

using namespace std;

int main(){

  cout << sizeof(int) << endl;
  cout << sizeof(char) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(long) << endl;
  cout << sizeof(long int) << endl;
  cout << sizeof(short) << endl;
  cout << sizeof(short int) << endl;
  cout << sizeof(long double) << endl;

  typedef char tata; // type redefinition 

  cout << sizeof(tata) << endl;

  return 0;
}