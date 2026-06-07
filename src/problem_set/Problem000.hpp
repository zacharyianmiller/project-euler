#pragma once

#include "ProblemBase.hpp"

/** 
 * Problem 0: Problem Zero
 * 
 * Date completed: 
 * Link: https://projecteuler.net/register
*/

struct Problem000 : public ProblemBase
{
    // Solution
    std::uint32_t ExpectedValue = 3179194264;

    Problem000(const int id, const std::string& title) : ProblemBase(id, title) {}
    
    bool run() override
    {
        std::uint32_t value = 1;
        std::uint32_t sum = 0;

        while (value <= 230000)
        {
            if (mldsp::Math::isOdd(value))
            {
                sum += value*value;
            }

            ++value;
        }

        return sum == ExpectedValue;
    }
};