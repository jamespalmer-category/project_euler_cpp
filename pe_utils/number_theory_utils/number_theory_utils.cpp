#include "number_theory_utils.h"
#include <bits/stdc++.h>

namespace NumberTheoryUtils
{
    bool is_prime(long long int n)
    {

        if (n == 2 || n == 3)
        {
            return true;
        }

        for (long long int i=2; i<=sqrt(n); i++){
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;

    }

    std::set<long long int> prime_factors(long long int n)
    {
        if (is_prime(n)){
            return {n};
        }
        else {
            for (long long int i=2; i<=sqrt(n); i++){
                if (n % i == 0)
                {
                    // get the set of factors from p_1, p_2
                    std::set<long long int> factors_1 = prime_factors(i);
                    std::set<long long int> factors_2 = prime_factors(n/i);
                    std::set<long long int> factors;

                    // I need to give a serious read of what the bloody hell these methods mean
                    std::set_union(factors_1.begin(),factors_1.end(), factors_2.begin(),factors_2.end(),inserter(factors, factors.begin()));
                    return factors;
                }
            }
            return {};
        }
        
    }
}
