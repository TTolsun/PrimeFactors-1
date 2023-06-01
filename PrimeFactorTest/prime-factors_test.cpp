#include "pch.h"
#include "../PrimeFactor/prime-factors.cpp"

using namespace std;

TEST(TestCaseName, TestName)
{
	PrimeFactor primeFactor{};
	const vector<int> expected{};
	EXPECT_EQ(primeFactor.of(1), expected);
}
