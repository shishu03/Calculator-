#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "calculator.h"

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <add|multiply> <num1> <num2> ...\n";
        return 1;
    }

    std::string operation = argv[1];
    std::vector<double> numbers;

    for (int i = 2; i < argc; ++i) {
        numbers.push_back(std::stod(argv[i]));
    }

    Calculator calc;

    if (operation == "add") {
        std::cout << calc.add(numbers) << std::endl;
    } else if (operation == "multiply") {
        std::cout << calc.multiply(numbers) << std::endl;
    } else {
        std::cerr << "Unknown operation: " << operation << std::endl;
        return 1;
    }

    return 0;
}
