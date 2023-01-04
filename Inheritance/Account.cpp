#include <bits/stdc++.h>
#include "Account.h"

Account::Account(){

}

Account::~Account(){
  std::cout << "Destructor Called!!" << std::endl;
}

void Account::deposit(double amount){
  std::cout << "Account deposit called with " << amount << std::endl;
}

void Account::withdraw(double amount){
  std::cout << "Account withdraw called with : " << amount << std::endl;
}

