#include <iostream>
#include <cmath> // for fabs function

int main() {
    float floatNum = 1.1f;
    double doubleNum = 1.1;

    // Direct comparison
    if (floatNum == doubleNum) {
        std::cout << "Equal (Exact Comparison)" << std::endl;
    } else {
        std::cout << "Not Equal (Exact Comparison)" << std::endl;
    }

    // Tolerance-based comparison
    double epsilon = 0.0001; // Define your tolerance level
    if (std::fabs(floatNum - doubleNum) < epsilon) {
        std::cout << "Equal with epsilon "<< epsilon << std::endl;
    } else {
        std::cout << "Not Equal with epsilon "<< epsilon << std::endl;
    }

    return 0;
}
