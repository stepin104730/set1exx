#include<iostream>
#include"boxx.h"
#include "gtest/gtest.h"
using namespace std;

TEST(Box, DefaultConstructer)
{
    Box b1;

    EXPECT_EQ(0, b1.length());
    EXPECT_EQ(0, b1.breadth());
    EXPECT_EQ(0, b1.height());
}

TEST(Box, ParameterizedConstructer){
    Box b1(1,3,7);
    EXPECT_EQ(1, b1.length());
    EXPECT_EQ(3, b1.breadth());
    EXPECT_EQ(7, b1.height());
    EXPECT_EQ(21.0, b1.volume());


}
TEST(Box, CopyConstructer){
    Box b3(1,5,9);
    Box b2(b3);
    EXPECT_EQ(45, b2.volume());

}
