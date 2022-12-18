#include <iostream>
#include <vector>
#include "jackknife.hpp"

int main()
{
    std::vector<double> x{10.0, 9.0, 8.0, 20.0, 43.0, 45.0, 2.0};
    double ave, err;
    estimator f = &average;

    computeJackknifeStatistics(x, f, 1, ave, err);
    std::cout << ave << " " << err << std::endl;
    computeJackknifeStatistics(x, 1, ave, err);
    std::cout << ave << " " << err << std::endl;

    return 0;
}