#pragma once

#include "ProblemBase.hpp"

/** 
 * Problem 1: Multiples of 3 or 5
 * 
 * Date completed: 
 * Link: https://projecteuler.net/problem=1
*/

struct Problem001 : public ProblemBase
{
    Problem001(
        const int id, 
        const std::string& title, 
        int expectedValue = 233168) : 
    ProblemBase(id, title, expectedValue) {}
    
    bool run() override
    {
        int sum = 0;
        for (int value = 1; value < 1000; ++value)
        {
            if (mldsp::Math::isMultipleOf(value, 3) || mldsp::Math::isMultipleOf(value, 5))
            {
                sum += value;
            }
        } 

        return sum == std::any_cast<int>(expectedValue);
    }
};