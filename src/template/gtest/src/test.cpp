#include"gtest/gtest.h"
#include"./foo.hpp"
/*
 * TEST Macro
 * TEST(TESTCASENAME,TESTNAME){
 * 	EXPECT_EQ(1,1);
 * }
 * The TEST macro an individual test case for a particular test case
 * Tests from the same test case will be grouped together in the execution output
 * Test cases and test names should be valid C++ idendifiers and should not begin with _
 */
TEST(testFoo,myTestFoo){
	EXPECT_EQ(42,foo());
	EXPECT_EQ(42,foo());
}
