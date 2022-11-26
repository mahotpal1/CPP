#include <iostream>
#include "Accounts.h"

using namespace std;

int main(){
  {
    Accounts new_account;
    new_account.set_name("Vishal Mahotpal");
    new_account.get_name();
  }
  {
    Accounts Vishal("Vishal", 1000);
    if(Vishal.deposite(243)){
      cout << "Deposite OK!" << endl;
    }else{
      cout << "Deposite Unsuccessfull !!" << endl;
    }
    cout << "Updated Balance : " << Vishal.get_balance() << endl;
    if(Vishal.withdraw(298)){
      cout << "Withdrwal Successfull!!" << endl;
    }else{
      cout << "Some Error Occured!" << endl;
    }
    cout << "Updated Balance : " << Vishal.get_balance() << endl;
  }

  Accounts *Harsh = new Accounts("Harsh", 1200);

  cout << "Name : " << Harsh->get_name() << " Balance : " << Harsh->get_balance() << endl;;
  
  delete Harsh;
  return 0;
}