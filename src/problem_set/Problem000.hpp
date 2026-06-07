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
    Problem000(
        const int id, 
        const std::string& title, 
        std::uint32_t expectedValue = 3179194264) : 
    ProblemBase(id, title, expectedValue) {}
    
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

        return sum == std::any_cast<std::uint32_t>(expectedValue);
    }
};