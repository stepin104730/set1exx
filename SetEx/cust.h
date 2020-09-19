#ifndef CUST_H_INCLUDED
#define CUST_H_INCLUDED

enum AccountType{
        savings,current
};


class Customer{

        int m_custID,m_phone,m_type,m_custName;
        double m_balance;
    public:
        Customer();
        Customer(AccountType);
        Customer(int,int,int,double);
        Customer(int,int,int);
        Customer(const Customer &);
        void Credit(double);
        double getBlance();
        void Display();



};

#endif // CUST_H_INCLUDED
