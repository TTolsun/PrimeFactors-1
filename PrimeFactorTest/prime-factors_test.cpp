#include "pch.h"
#include "../PrimeFactor/prime-factors.cpp"

using namespace std;

TEST(TestCaseName, Of1)
{
	PrimeFactor primeFactor{};
	const vector<int> expected{};
	EXPECT_EQ(primeFactor.of(1), expected);
}

TEST(TestCaseName, Of2)
{
	PrimeFactor primeFactor{};
	const vector<int> expected{2};
	EXPECT_EQ(primeFactor.of(2), expected);
}