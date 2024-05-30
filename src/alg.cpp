// Copyright 2024 Derun Andrey
#include "alg.h"

#include <cstdint>
#include <stdexcept>

bool checkPrime(uint64_t value) {
  if (value <= 1) return false;
  if (value <= 3) return true;
  if (value % 2 == 0 || value % 3 == 0) return false;
  for (uint64_t i = 5; i * i <= value; i += 6) {
    if (value % i == 0 || value % (i + 2) == 0) return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n < 0) {
    throw std::invalid_argument("Input value must be non-negative.");
  }
  if (n == 0) return 0;
  uint64_t count = 0;
  uint64_t num = 1;
  while (count < n) {
    ++num;
    if (checkPrime(num)) {
      ++count;
    }
  }
  return num;
}

uint64_t nextPrime(uint64_t value) {
  if (value < 0) {
    throw std::invalid_argument("Input value must be non-negative.");
  }
  if (value < 2) {
    return 2;
  }
  do {
    ++value;
  } while (!checkPrime(value));

  return value;
}

uint64_t sumPrime(uint64_t upperBound) {
  if (upperBound <= 2) {
    return 0;
  }
  uint64_t sum = 0;
  for (uint64_t i = 2; i < upperBound; ++i) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
