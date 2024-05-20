// Copyright 2024 Derun Andrey

#include <gtest/gtest.h>

#include <cstdint>

#include "alg.h"


TEST(checkPrime, smallnumbers) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
}

TEST(checkPrime, compositeNumbers) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(6));
  EXPECT_FALSE(checkPrime(9));
}

TEST(nPrime, first) { EXPECT_EQ(nPrime(1), 2); }

TEST(nPrime, five) { EXPECT_EQ(nPrime(5), 11); }

TEST(nPrime, ten) { EXPECT_EQ(nPrime(10), 29); }

TEST(nextPrime, nextprimeofsmallnumber) { EXPECT_EQ(nextPrime(10), 11); }

TEST(nextPrime, nextprimeoflargenumber) { EXPECT_EQ(nextPrime(997), 1009); }

TEST(nextPrime, nextprimeofprimenumber) { EXPECT_EQ(nextPrime(13), 17); }

TEST(sumPrime, sumbelowten) { EXPECT_EQ(sumPrime(10), 17); }

TEST(sumPrime, sumbelow50) { EXPECT_EQ(sumPrime(50), 328); }

TEST(sumPrime, SumOfPrimesBelowTwoMillion) {
  uint64_t result = sumPrime(2000000);
  uint64_t expected_sum = 142913828922;
  EXPECT_EQ(result, expected_sum);
}
