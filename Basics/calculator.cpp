#include <iostream>

using namespace std;

int main(){

  double a, b;
  cin >> a >> b;

  cout << "Sum of two numbers is : " << a+b << endl;
  cout << "Difference of two numbers is : " << a-b << endl;
  cout << "modulus of two numbers is : " << (int)a%(int)b << endl;
  cout << "product of two numbers is : " << a*b << endl;
  cout << "remainder of two numbers is : " << a/b << endl;
 
  return 0;
}