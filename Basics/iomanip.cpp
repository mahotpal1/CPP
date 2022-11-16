#include <iostream> 
#include <iomanip>
using namespace std;

int main(){

  double n = 13.2345634;

  cout << fixed << setprecision(4); //number is set to 4 decimal places
  cout  << "value of n with precision : " << n << endl;
  return 0;
}