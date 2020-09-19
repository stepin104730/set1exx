#include "cust.h"
#include<iostream>

using namespace std;
Customer:: Customer() {

    m_custID=0;
    m_phone=0;
    m_type=0;
    m_custName=0;

}
Customer::Customer(int x,int y,int z,double a)
{
        m_custID=x;
    m_phone=y;
    m_type=z;
    m_balance=a;

}


Customer::Customer(int x,int y,int z) {
         m_custID=x;
    m_phone=y;
    m_type=z;
}
Customer::Customer(const Customer &ref) {
        m_custID=ref.m_custID;
    m_phone=ref.m_phone;
    m_type=ref.m_type;
    m_balance=ref.m_balance;

}

Customer::Customer(AccountType){

            m_type=savings;

}

void Customer:: Credit(double x) {

    m_balance+=x;



}
double Customer:: getBlance() {

    return m_balance;

}
void Customer:: Display() {

    cout<<"m_custId"<<m_custID;

}
