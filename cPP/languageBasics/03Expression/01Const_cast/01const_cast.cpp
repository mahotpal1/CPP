/*
‘this’ is treated by the compiler as ‘const MyClass* const this’, 
i.e. ‘this’ is a constant pointer to a constant object, thus compiler
doesn’t allow to change the data members through ‘this’ pointer. 
const_cast changes the type of ‘this’ pointer to ‘MyClass* const this’.
*/

#include <iostream>

class MyClass{
  private:
    int roll;
  public:
    // Constructor
    MyClass(int r):roll(r){}

    // Inside the const function that changes roll with help of const_cast
    void changeValue() const{
      (const_cast<MyClass*> (this))->roll = 5; // As this is treated as const MyClass*
    }

    int getRoll(){
      return roll;
    } 
};

int main(){
  MyClass *m = new MyClass(2);
  //initial value of roll
  std::cout << "The initial value of roll : " << m->getRoll() << std::endl;
  //final value of roll after converting using const_cast
  m->changeValue();
  std::cout << "The value of roll changed to : " << m->getRoll() << std::endl;
  return 0;
}