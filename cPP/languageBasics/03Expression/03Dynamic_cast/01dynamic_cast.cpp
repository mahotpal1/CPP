/*
for dynamic casting there must be one Virtual function. 
Suppose If we do not use the virtual function, then what is the result?

In that case, it generates an error message “Source type is not polymorphic”.
*/

#include <iostream>

class BaseClass{
  virtual void print(){
    std::cout << "Inside Base!" << std::endl;
  }
};

class Child1: public BaseClass{
  void print(){
    std::cout << "Inside Child1!" << std::endl;
  }
};

class Child2: public BaseClass{
  void print(){
    std::cout << "Inside Child2!" << std::endl;
  }
};

int main(){
  Child1 c1;
  //case1
  //Dynamic Casting (Upcasting)
  BaseClass* bp = dynamic_cast<BaseClass*>(&c1); // base class object holds child class object
   //case2
  // dynamic_casting will throw error as not polymorphic.
  //Child2* c2 = dynamic_cast<Child2*>(bp); //must have polymorphic class type.
  if(bp == nullptr){
    std::cout << "Null" << std::endl;
  }else{
    std::cout << "Not Null" << std::endl;
  } 
  //case3 downcasting
  Child1* c2 = dynamic_cast<Child1*>(bp); //needs to be virtual
  if(c2 == nullptr){
    std::cout << "Null!!" << std::endl;
  }else{
    std::cout << "Not Null!!" << std::endl;
  }
  //case4
  try{
    Child2* c3 = dynamic_cast<Child2*>(bp);
  }catch(std::exception& e){
    std::cout << e.what() << std::endl;
  }
  /*
  if(c3 == nullptr){
    std::cout << "NULL!!" << std::endl;
  }else{
    std::cout << "Not Null!!" << std::endl;
  }*/
  return 0;
}