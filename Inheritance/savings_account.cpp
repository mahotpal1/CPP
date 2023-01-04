#include <bits/stdc++.h>
#include "savings_account.h"

savings_account::savings_account(){

}
savings_account::~savings_account(){
  std::cout << "Destructor for savings account!!" << std::endl;
}

void savings_account::deposit(double amount){
  std::cout << "Savings account deposit called with : " << amount << std::endl;
}

void savings_account::withdraw(double amount){
  std::cout << "Savings account withdraw called with : " << amount << std::endl;
}