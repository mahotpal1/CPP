#include <iostream>

using namespace std;

int swap(int * a, int * b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;

  return 0;
}

int main(){
  int a=10, b=20;
  cout << "Initial value of a,b : " << a << b << endl;
  swap(&a,&b);
  cout << "swapped value of a,b : " << a << b << endl;
  return 0;
}
