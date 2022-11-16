#include <iostream>

using namespace std;

int main(){
  /* enum types is used to define a optional type which 
   * with set of names as values 
   * ex : enum enum-name { list of names } var-list; 
  */
  enum color {red,blue,green,pink = 5,orange} c;

  c = blue;
  
  cout << c << endl;
  cout << c+2 << endl;
  cout << c+5 << endl;
  cout << orange << endl;

  return 0;
}