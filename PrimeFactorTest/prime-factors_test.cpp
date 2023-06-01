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

TEST_F(PrimeFactorTexture, Of3)
{
	expected = { 3 };
	EXPECT_EQ(primeFactor.of(3), expected);
}

TEST_F(PrimeFactorTexture, Of4)
{
	expected = { 2, 2 };
	EXPECT_EQ(primeFactor.of(4), expected);
}

TEST_F(PrimeFactorTexture, Of6)
{
	expected = { 2, 3 };
	EXPECT_EQ(primeFactor.of(6), expected);
}

TEST_F(PrimeFactorTexture, Of9)
{
	expected = { 3, 3 };
	EXPECT_EQ(primeFactor.of(9), expected);
}

TEST_F(PrimeFactorTexture, Of12)
{
	expected = { 2, 2, 3 };
	EXPECT_EQ(primeFactor.of(12), expected);
}