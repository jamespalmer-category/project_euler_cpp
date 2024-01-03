#include <bits/stdc++.h>

using namespace std;

int even_fib_sum(int upper_bound) {

    int first_fib_number = 0;
    int second_fib_number = 1;

    int sum = 0;


    while (first_fib_number <= upper_bound && second_fib_number <= upper_bound){
        // Check if it's even and then add
        if (first_fib_number % 2 == 0){
            sum += first_fib_number;
        } 

        if (second_fib_number % 2 == 0){
            sum += second_fib_number;
        }

        first_fib_number += second_fib_number;
        second_fib_number += first_fib_number;
    }

    //cout << sum << "\n";

    return sum;
}

int main() {

// solution comes here

    int upper_bound_input;

    cout << "Enter upper bound" << "\n";
    cin >> upper_bound_input;
    cout << "Sum of fib numbers under " << upper_bound_input << " is " << even_fib_sum(upper_bound_input) << "\n";

}