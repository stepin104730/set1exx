#include<iostream>
#include "cust.h"
#include <gtest/gtest.h>


TEST(Customer,default1){

        Customer c1;
        EXPECT_EQ(0,c1.getBlance());


}

TEST(Customer,parameterdefault1){

        Customer c1(10025,102,1,9999);
        c1.Credit(1);
        EXPECT_EQ(10000,c1.getBlance());


}

