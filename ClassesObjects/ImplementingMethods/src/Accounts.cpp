#include "Accounts.h"
#include <string>

void Accounts::set_name(std::string n){
  name =n;
}

std::string Accounts::get_name(){
  return name;
}

bool Accounts::deposite(double amount){
  balance += amount;
  return true;
}

bool Accounts::withdraw(double amount){
  if(balance-amount >= 0.0){
    balance -= amount;
    return true;
  }
  else{
    return false;
  }
}