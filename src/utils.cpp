#include "utils.h"

double sumVector(const std::vector<double>& nums) {
    double sum = 0.0;
    for (double num : nums) {
        sum += num;
    }
    return sum;
}
