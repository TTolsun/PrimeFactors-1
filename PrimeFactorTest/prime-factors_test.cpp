#include "pch.h"
#include "../PrimeFactor/prime-factors.cpp"

using namespace std;

class PrimeFactorTexture : public testing::Test
{
public:
	PrimeFactor primeFactor{};
	vector<int> expected{};
};

TEST_F(PrimeFactorTexture, Of1)
{
	EXPECT_EQ(primeFactor.of(1), expected);
}

TEST_F(PrimeFactorTexture, Of2)
{
	expected = { 2 };
	EXPECT_EQ(primeFactor.of(2), expected);
}
