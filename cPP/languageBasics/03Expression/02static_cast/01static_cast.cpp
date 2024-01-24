/*
static cast for primitive data type pointer.
*/
#include <iostream>

class MyClass{
  private: 
    int myNum;
  public:
    MyClass(int input_num):myNum(input_num){}

    int getMyNum(){
      return myNum;
    }
};

int main(){
  float num = 23.76;
  int my_num = static_cast<int>(num);
  MyClass *m = new MyClass(my_num);
  std::cout << "The number nearest to decimal : " << m->getMyNum() << std::endl;

  return 0;
}
