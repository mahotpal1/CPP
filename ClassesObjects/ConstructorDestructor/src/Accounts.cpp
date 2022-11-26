#include <string>
#include "Accounts.h"

void Accounts::set_name(std::string n){
  name = n;
}

void Accounts::set_balance(double b){
  balance = b;
}

double Accounts::get_balance(){
  return balance;
}

std::string Accounts::get_name(){
  return name;
}

bool Accounts::withdraw(double amount){
  if(balance-amount>=0){
    balance -= amount; 
    return true;
  }else{
    return false;
  }
}

bool Accounts::deposite(double amount){
  balance += amount;
  return true;
}
