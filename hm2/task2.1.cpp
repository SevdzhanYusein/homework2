#include <iostream>
#include <iomanip>
#include <cmath>

// Slightly better AlmostEqual function – still not recommended bool AlmostEqualRelativeOrAbsolute(float A, float B,
bool AlmostEqualRelativeOrAbsolute(float A, float B, float maxRelativeError, float maxAbsoluteError)
{
    if (fabs(A - B) < maxAbsoluteError)
        return true;

    float relativeError;
    if (fabs(B) > fabs(A))
        relativeError = fabs((A - B) / B);
    else
        relativeError = fabs((A - B) / A);

    if (relativeError <= maxRelativeError)
        return true;
    return false;
}

// AlmostEqual function – still not recommended
bool AlmostEqualRelative2(float A, float B, float maxRelativeError)
{
    if (A == B)
        return 1;
    float relativeError;
    if (fabs(B) > fabs(A))
        relativeError = fabs((A - B) / B);
    else
        relativeError = fabs((A - B) / A);
    if (relativeError <= maxRelativeError)
        return 1;
    return 0;
}



int main()
{
    float a = 1.0f;
    float b = 1.0001f;
    float epsilonValues[] = {0.01f, 0.001f, 0.0001f};
    float maxRelativeError = 0.00001f;
    float maxAbsoluteError = 0.00001f;

    for (float epsilon : epsilonValues)
    {

        /*----------------------------------------------------------------------*/
        std::cout << std::endl;
        std::cout << "Almost Equal Relative Second Version: " << std::endl;
        if (AlmostEqualRelative2(a, b, epsilon))
            std::cout << "A and B Are almost equal relative to epsilon = " << epsilon << std::endl;
        else
            std::cout << "A and B Are Not almost equal relative to epsilon = " << epsilon << std::endl;
        /*----------------------------------------------------------------------*/
        std::cout << std::endl;
        std::cout << "Almost Equal Relative Or Absolute: " << std::endl;
        if (AlmostEqualRelativeOrAbsolute(a, b, maxRelativeError, maxAbsoluteError))
            std::cout << "A and B Are almost equal relative to epsilon = " << epsilon << std::endl;
        else
            std::cout << "A and B Are Not almost equal relative to epsilon = " << epsilon << std::endl;

        std::cout << std::endl;

        /*----------------------------------------------------------------------*/

        

        std::cout << std::endl;
    }

    return 0;
}
