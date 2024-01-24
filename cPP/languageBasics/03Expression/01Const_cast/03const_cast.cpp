/*
  It is undefined behavior to modify a 
  value which is initially declared as const.
*/
#include <iostream>

class MyClass{
  private:
    int var1;
  public:
    MyClass(int var2):var1(var2){}

    int funct(int* num){
      //alteration to const value is not allowed; undefined behavior value will not change
      *num += var1;
      return (*num); 
    }
};

int main(){
  //val is a const value;
  const int val =10;
  const int *ptr = &val;
  int *value = const_cast<int *>(ptr);
  MyClass *m = new MyClass(23);
  m->funct(value);
  std::cout << val << std::endl;
  return 0;
}