#include "Account.h"
#include "savings_account.h"
#include <bits/stdc++.h>

using namespace std;

int main(){
  cout << "Account....." << endl;
  Account acc{};
  acc.deposit(2000.0);
  acc.withdraw(500.0);

  cout << endl;


  Account *p_acc{nullptr};
  p_acc = new Account();
  p_acc->deposit(1000.0);
  p_acc->withdraw(500.0);

  delete p_acc;


  cout << "Savings aCCOUNT class : ./......." << std::endl;
  savings_account sav_acc{};
  sav_acc.deposit(2000.0);
  sav_acc.withdraw(300.0);

  cout << endl;

  savings_account *p_sav_acc{nullptr};
  p_sav_acc = new savings_account();
  p_sav_acc->deposit(1000.0);
  p_sav_acc->withdraw(400.0);
  delete(p_sav_acc);

  cout << endl;
  return 0;
}