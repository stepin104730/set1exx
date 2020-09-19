//#include<iostream>
#include "acnt.h"
#include "gtest/gtest.h"
using namespace std;

TEST(Account, DefaultConstructer) {
    Account a1;

    EXPECT_EQ(0, a1.getBalance());
    EXPECT_EQ(0, a1.credit(0));
    EXPECT_EQ(0, a1.debit(0));
}

TEST(Account, ParametarizedConstructer) {
    Account a1(1024,"lara",3000);

    EXPECT_EQ(3000, a1.getBalance());
    EXPECT_EQ(3300, a1.credit(300));
    EXPECT_EQ(3270, a1.debit(30));
    EXPECT_EQ(3270, a1.getBalance());
}
TEST(Account, CopyConstructer) {
    Account a1(1024,"lara",3000);
    Account a2(a1);
    EXPECT_EQ(3000, a1.getBalance());
    EXPECT_EQ(3300, a1.credit(300));
    EXPECT_EQ(3270, a1.debit(30));
    EXPECT_EQ(3270, a1.getBalance());

}
