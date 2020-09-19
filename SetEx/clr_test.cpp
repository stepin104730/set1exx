#include <iostream>
#include "clr.h"
#include <gtest/gtest.h>

using namespace std;
TEST(Color,DisplayTest) {
    Color a1(12,125,220);
    std::string ExpectedOut="12125220";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
