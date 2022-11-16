#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  int radius = 12;
  
  double volume = 3.14*(4/3)*pow(radius, 3);
  cout << fixed << setprecision(1);
  cout << "Volume of sphere : " << volume << endl;

  return 0;
}