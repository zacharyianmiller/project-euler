#include <iostream>

/** https://projecteuler.net/archives */


// TODO:
//  - Make base class w/ base run method for unit testing
//  - Add timer to base class to test how long an iteration takes (roughly)
//  - Make math library to aid in accumulating helper functions like isOdd below

bool isOdd(const int intValue) noexcept
{
    return intValue % 2 /* == 1 */;
}

int main()
{
    std::uint32_t value = 1;
    std::uint32_t sum = 0;

    while (value <= 230000)
    {
        if (isOdd(value))
        {
            sum += value*value;
        }

        ++value;
    }

    std::cout << "Total: " << sum << std::endl;

    return 0;
}