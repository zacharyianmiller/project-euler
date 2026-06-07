#pragma once

// Standard includes
#include <iostream>
#include <string>
#include <chrono>
#include <print>

// External includes
#include <mldsp-utils/modules/math/mldsp_Math.hpp>

class ProblemBase
{
public:

    ProblemBase(const int id, const std::string& title) : id(id), title(title) {}
    virtual ~ProblemBase() = default;

    template <typename Derived>
    static std::unique_ptr<Derived> create(const int id, const std::string& title) {
        auto p = std::make_unique<Derived>(id, title);
        p->launch();
        return p;
    }

protected:

    int getId() { return id; }
    std::string& getTitle() { return title; }

private:

    virtual bool run() = 0;
    
    void launch()
    {
        auto start = std::chrono::system_clock::now();
        bool result = run();
        auto end = std::chrono::system_clock::now();
        auto durationMs = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() / 1e6;
        
        const std::string& log = std::format("[Project Euler - #{}] Completed in {}ms", id, durationMs);
        std::cout << log << std::endl;
    }

    int id;
    std::string title;

};