#ifndef _ACCOUNTS_H_
#define _ACCOUNTS_H_
#include <string>
#include <iostream>

class Accounts{
  private :
    std::string name;
    double balance;
  
  public : 
    Accounts(){};

    Accounts(std::string n, double b){
      name = n;
      balance = b;
    }
    Accounts(std::string n){
      name = n;
    }
    ~Accounts(){
      std::cout << "DEstructor has been Called!!" << std::endl;
    }

    void set_name(std::string n);
    void set_balance(double b);
    double get_balance();
    std::string get_name();
    bool withdraw(double amount);
    bool deposite(double amount);
};

#endif