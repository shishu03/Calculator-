#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    std::vector<double> nums = {1.5, 2.0, 3.5};

    std::cout << "Sum: " << calc.add(nums) << std::endl;
    std::cout << "Product: " << calc.multiply(nums) << std::endl;

    return 0;
}
