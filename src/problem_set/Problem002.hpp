#include "ProblemBase.hpp"
#include <thread>
/** 
 * Problem 1: Multiples of 3 or 5
 * 
 * Date completed: 
 * Link: https://projecteuler.net/problem=1
*/

struct Problem002 : public ProblemBase
{
    Problem002(
        const int id, 
        const std::string& title, 
        int expectedValue = 4613732) : 
    ProblemBase(id, title, expectedValue) {}
    
    bool run() override
    {
        std::uint32_t x = 2;
        std::uint32_t x1 = 1;
        std::uint32_t sum = 0;

        while (x < 4000000)
        {
            if (mldsp::Math::isEven(x))
            {
                sum += x;
            }

            x += x1; // next fibonacci value
            x1 = x - x1; // previous fibonacci value
        }

        return sum == std::any_cast<int>(expectedValue);
    }
};