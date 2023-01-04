#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class savings_account:public Account{
  public :
    savings_account();
    ~savings_account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif