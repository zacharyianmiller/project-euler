#include <vector>

#include "problem_set/Problem000.hpp"
#include "problem_set/Problem001.hpp"

int main()
{
    std::vector<std::unique_ptr<ProblemBase>> probSet;

    probSet.push_back(ProblemBase::create<Problem000>(0, "Problem Zero"));
    probSet.push_back(ProblemBase::create<Problem001>(1, "Multiples of 3 or 5"));

    return 0;
}