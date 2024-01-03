#include <iostream>

// it will do the sum, but if I don't print the sum at the end of the function then it doesn't return the correct value

int multiples_3_5_sum(int upper_bound)
{
    int sum = 0;

    for (int i; i < upper_bound; i++) 
    {

        // check divisibility 
        if (i % 3 == 0 || i % 5 == 0) 
        {
            sum = sum+i;
            // std::cout << sum << "\n";
        }
    }

    //std::cout << sum << "\n";

    return sum;
}

int main()
{

    int upper_bound_input;

    //input for function
    std::cout << "Enter upper bound for the sum" << "\n";
    std::cin >> upper_bound_input;

    // run function
    //int answer = multiples_3_5_sum(upper_bound_input);
    std::cout << "Sum of multiples of 3 and 5 under " << upper_bound_input << " is " << multiples_3_5_sum(upper_bound_input) << "\n"; 

}