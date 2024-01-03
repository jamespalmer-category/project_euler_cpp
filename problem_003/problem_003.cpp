#include "number_theory_utils.h"
#include <bits/stdc++.h>

using namespace std;

long long int largest_prime_factor(long long int n)
{
    set<long long int> pfs = NumberTheoryUtils::prime_factors(n);


    if (!pfs.empty())
    {
        return *pfs.rbegin();
    }
    else{
        return 0;
    }
}

int main() {

    long long int number;

    cout << "Enter Number to find highest prime factor of" << "\n";
    cin >> number;
    cout << "The largest prime factor of " << number << " is " << largest_prime_factor(number) << "\n";  
}