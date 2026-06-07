#include <vector>

#include "problem_set/Problem000.hpp"

int main()
{
    std::vector<std::unique_ptr<ProblemBase>> probSet;

    probSet.push_back(ProblemBase::create<Problem000>(0, "Problem Zero"));

    return 0;
}