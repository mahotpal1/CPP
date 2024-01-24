/*
 const_cast can be used to pass const data to a function that 
 doesn’t receive const.
*/
#include <iostream>

class MyClass{
  private:
    int num;
  public:
    MyClass(int new_num):num{new_num}{
    }
    
    int calculateSum(int data){
      return data+num;
    }
};

int main(){
  MyClass *m = new MyClass(5);
  const int val = 8;
  const int *num2 = &val;
  std::cout << "The sum with num2 = " << m->calculateSum(*(const_cast<int*>(num2))) << std::endl;
  return 0;
}