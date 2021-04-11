#include"gtest/gtest.h"
#include"./foo.hpp"
TEST (testFoo,myTestFoo){
	EXPECT_EQ(42,foo());
	EXPECT_EQ(42,foo());
}
