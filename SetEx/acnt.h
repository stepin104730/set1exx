#ifndef ACNT_H_INCLUDED
#define ACNT_H_INCLUDED





#include<string>
using namespace std;
class Account {
    int m_accNumber;
  std::string m_accName;
  double m_balance;

public:
  Account();
  Account(int, std::string, double);
  Account(int,double);
  Account(const Account &);
  double credit(double amount);
  double debit(double amount1);
  /*int getCustomerId();
  std::string getCustomerName();*/
  double getBalance() ;
  void display();
};





#endif // ACNT_H_INCLUDED
