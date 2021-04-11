#include"gtest/gtest.h"
#include"./lib/foo.hpp"
class TestFixtureExample:public ::testing::Test{
	public:
		TestFixtureExample():foo(new Foo()){};
		virtual void TearDown(){delete foo;};
		Foo*foo;

};
TEST_F(TestFixtureExample,TestIt){
	ASSERT_TRUE(foo->run());
}
