// Copyright 2024 Derun Andrey

#include <gtest/gtest.h>

#include <cstdint>

#include "alg.h"

TEST(IsPrimeTest, SmallPrimeNumbers) { EXPECT_TRUE(checkPrime(2)); }

TEST(IsPrimeTest, NegativeNumber) { EXPECT_FALSE(checkPrime(-5)); }

TEST(IsPrimeTest, Zero) { EXPECT_FALSE(checkPrime(0)); }

TEST(IsPrimeTest, One) { EXPECT_FALSE(checkPrime(1)); }

TEST(IsPrimeTest, LargePrimeNumber) { EXPECT_TRUE(checkPrime(104729)); }

TEST(NthPrimeTest, ZeroThPrime) { EXPECT_EQ(nPrime(0), 0); }

TEST(NthPrimeTest, NegativeNthPrime) {
  EXPECT_THROW(nPrime(-10), std::invalid_argument);
}

TEST(NthPrimeTest, LargeNthPrime) { EXPECT_EQ(nPrime(1000), 7919); }

TEST(NextPrimeTest, NextPrimeOfNegativeNumber) {
  EXPECT_THROW(nextPrime(-7), std::invalid_argument);
}

TEST(NextPrimeTest, NextPrimeOfZero) { EXPECT_EQ(nextPrime(0), 2); }

TEST(NextPrimeTest, NextPrimeOfOne) { EXPECT_EQ(nextPrime(1), 2); }

TEST(NextPrimeTest, NextPrimeOfEvenNumber) { EXPECT_EQ(nextPrime(24), 29); }

TEST(SumOfPrimesTest, SumBelowZero) { EXPECT_EQ(sumPrime(-10), 0); }

TEST(SumOfPrimesTest, SumBelowOne) { EXPECT_EQ(sumPrime(1), 0); }

TEST(SumOfPrimesTest, SumBelowTwo) { EXPECT_EQ(sumPrime(2), 0); }

TEST(SumOfPrimesTest, SumBelowThree) { EXPECT_EQ(sumPrime(3), 2); }

TEST(SumOfPrimesTest, SumBelowLargeNumber) {
  EXPECT_EQ(sumPrime(1000000), 37550402023);
}
