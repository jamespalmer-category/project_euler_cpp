#include <iostream>

int multiples_3_5_sum(int upper_bound)
{
    int sum = 0;

    for (int i=0; i < upper_bound; i++) 
    {

        // check divisibility 
        if (i % 3 == 0 || i % 5 == 0) 
        {
            sum = sum+i;
        }
    }

    return sum;
}

int main()
{

    int upper_bound_input;

    //input for function
    std::cout << "Enter upper bound for the sum" << "\n";
    std::cin >> upper_bound_input;

    // run function
    std::cout << "Sum of multiples of 3 and 5 under " << upper_bound_input << " is " << multiples_3_5_sum(upper_bound_input) << "\n"; 
    return 0;
}