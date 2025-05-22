#include "calculator.h"
#include "operations.h"
#include "utils.h"

double Calculator::add(const std::vector<double>& nums) {
    return sumVector(nums);
}

double Calculator::multiply(const std::vector<double>& nums) {
    double result = 1.0;
    for (double num : nums) {
        result = multiplyTwo(result, num);
    }
    return result;
}
