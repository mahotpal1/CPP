// Example program
#include <iostream>
#include <string>

int main()
{
  #if MYNUM 
    std::cout << "MYNUM is defined" << std::endl;
    #ifndef MYNUM
        std::cout << "MYNUM is not defined" << std::endl;
    #elif MYNUM==100 
        std::cout << "MYNUM is 100" << std::endl;
    #else 
        std::cout << "MYNUM is not 100" << std::endl;
    #endif
#endif

#define VAL1 2
#if !defined(VAL1)
    std::cout << "VAL1 is not defined!!" << std::endl;
#elifdef VAL2
    std::cout << "VAL2 is not deifned!!" << std::endl;
#elifndef VAL2
    std::cout << "VAL 2 is defined and value is : " << std::endl; // VAL2 << std::endl; //throws error as val2 is not defined to overcome issue fix is below
#endif

// To fix the problem above we may conditionally define the
// macro IS_SUPPORTED only if the C++23 directives
// #elifdef/#elifndef are supported.
#if 0
#elifndef UNDEFINED_MACRO //if anything not defined
#define IS_SUPPORTED // set IS_SUPPORTED as defined, so can be used as prior check
#else
#endif

#ifdef IS_SUPPORTED
    #ifdef VAL2
        std::cout << "Val2 is defined!! << std::endl;
    #elifdef Val2 // same as ifdef above
        std::cout << "val2 is defined!!" << std::endl;
    #elifndef VAL2
        std::cout << "Val2 is not defined but still executing!!" << std::endl;
    #endif
#endif
    return 0;
}