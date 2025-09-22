#include <iostream>
#include <vector>

/**
 * @brief Loops over a vector and prints out its elements.
 *
 * @details This program demonstrates how to loop over a vector
 *          and print out its elements.
 */

std::vector<int> v = {1, 2, 3, 4, 5};
std::vector<double> d;

int main()
{
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << std::endl;
    }
/** 
 * @brief range for loops over the vector 
 */    
    for (int i : v)
    {
        std::cout << i << std::endl;
    }

    /** push_back() adds an element to the end of the vector */
    d.push_back(22.1);
    d.push_back(22.2);
    for (double i : d)
    {
        std::cout << i << std::endl;
    }
    return 0;
}


