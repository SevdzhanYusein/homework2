#include <iostream>
#include <cmath>
#include <limits>

// Функция за сравнение на две числа с плаваща запетая с дадена точност
bool float_equals(float a, float b, float epsilon = std::numeric_limits<float>::epsilon()) {
    return std::fabs(a - b) < epsilon;
}

// Функция за сравнение на две числа с плаваща запетая с дадена абсолютна грешка
bool float_equals_absolute(float a, float b, float absolute_error) {
    return std::fabs(a - b) < absolute_error;
}

// Функция за сравнение на две числа с плаваща запетая с дадена относителна грешка
bool float_equals_relative(float a, float b, float relative_error) {
    if (std::fabs(b) > std::fabs(a)) {
        return std::fabs((a - b) / b) < relative_error;
    } else {
        return std::fabs((a - b) / a) < relative_error;
    }
}

int main()
{
    float x = 0.1f;
    float y = 0.2f;

    // Сравнение с точност по подразбиране
    std::cout << "Comparison with default accuracy: " << float_equals(x, y) << std::endl;

    // Сравнение с дадена абсолютна грешка
    std::cout << "Comparison with given absolute error: " << float_equals_absolute(x, y, 0.01f) << std::endl;

    // Сравнение с дадена относителна грешка
    std::cout << "Comparison with given relative error: " << float_equals_relative(x, y, 0.01f) << std::endl;


    return 0;
}
