#include <iostream>

int main(int argc, char** argv)
{
    //std::cout << "Fundamental type sizes (in bytes):\n";

    //// Character types
    //std::cout << "char:               " << sizeof(char) << "\n";

    //// Signed integer types
    //std::cout << "signed char:        " << sizeof(signed char) << "\n";
    //std::cout << "short:              " << sizeof(short) << "\n";
    //std::cout << "int:                " << sizeof(int) << "\n";
    //std::cout << "long:               " << sizeof(long) << "\n";
    //std::cout << "long long:          " << sizeof(long long) << "\n";

    //// Unsigned integer types
    //std::cout << "unsigned char:      " << sizeof(unsigned char) << "\n";
    //std::cout << "unsigned short:     " << sizeof(unsigned short) << "\n";
    //std::cout << "unsigned int:       " << sizeof(unsigned int) << "\n";
    //std::cout << "unsigned long:      " << sizeof(unsigned long) << "\n";
    //std::cout << "unsigned long long: " << sizeof(unsigned long long) << "\n";

    //// Floating‑point types
    //std::cout << "float:              " << sizeof(float) << "\n";
    //std::cout << "double:             " << sizeof(double) << "\n";
    //std::cout << "long double:        " << sizeof(long double) << "\n";

    //// Pointer size (depends on 32‑bit vs 64‑bit)
    //std::cout << "void*:              " << sizeof(void*) << "\n";




    //double x = 10.0;
    //double y = 10.0;
    //if (x == y)
    //    std::cout << "X and Y are identical" << std::endl;

    const double x = 100000.123456789;
    const double a = 200000.123456789;
    double y = (x + a) / x;
    double z = 1.0 + (a / x);
    //double z = x / y;
    if (y == z)
        std::cout << "X and Y are identical" << std::endl;


    return 0;
}
