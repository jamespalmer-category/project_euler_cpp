#ifndef NUMBER_THEORY_UTILS_H
#define NUMBER_THEORY_UTILS_H

#include <bits/stdc++.h>

namespace NumberTheoryUtils {
    bool is_prime(long long int number);
    std::set<long long int> prime_factors(long long int n);
}

#endif