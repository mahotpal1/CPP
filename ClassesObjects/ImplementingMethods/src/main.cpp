#include <iostream>
#include "Accounts.h"

using namespace std;

int main(){
  Accounts vishal_account;

  vishal_account.set_name("Vishal Mahotpal");
  vishal_account.set_balance(1000.00);

  if(vishal_account.deposite(324.00)){
    cout << "Deposite OK!" << endl;
  }else{
    cout << "Deposite not allowed" << endl;
  }

  if(vishal_account.withdraw(100.24)){
    cout << "Withdrawl OK!" << endl;
  }else{
    cout << "Insufficient Account" << endl;
  }
  
  return 0;
}