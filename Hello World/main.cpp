#include <iostream> // required for std::cout and std::endl - general input/output stream objects and being able to interact with the console
// #using namespace std; // Using this reduces the need to prefix std:: to standard library objects, 
// but it's often better to avoid it in larger projects to prevent name conflicts ' if we uncomment this line, we can write cout instead of std::cout


int main (int argc, char **argv) {

	std::cout << "Hello World" << std::endl;

	std::cout << sizeof(int) << std::endl;   // prints the size of an int in bytes
	std::cout << sizeof(char) << std::endl;  // prints the size of a char in bytes
	std::cout << sizeof(double) << std::endl; // prints the size of a double in bytes
/*	std::cout << "bool:        " << sizeof(bool) << " bytes\n";
	std::cout << "char:        " << sizeof(char) << " bytes\n";
	std::cout << "wchar_t:     " << sizeof(wchar_t) << " bytes\n";
	std::cout << "char16_t:    " << sizeof(char16_t) << " bytes\n";
	std::cout << "char32_t:    " << sizeof(char32_t) << " bytes\n";

	std::cout << "short:       " << sizeof(short) << " bytes\n";
	std::cout << "int:         " << sizeof(int) << " bytes\n";
	std::cout << "long:        " << sizeof(long) << " bytes\n";
	std::cout << "long long:   " << sizeof(long long) << " bytes\n";

	std::cout << "float:       " << sizeof(float) << " bytes\n";
	std::cout << "double:      " << sizeof(double) << " bytes\n";
	std::cout << "long double: " << sizeof(long double) << " bytes\n";

	std::cout << "void*:       " << sizeof(void*) << " bytes\n";*/ // pointer size (platform‑dependent)




	//double x = 10.0;
	//double y = 10.0; // executes as expected, x and y are indeed equal
	//if (x == y) 
	//{
	//	std::cout << "x and y are equal" << std::endl;
	//}
	//else 
	//{
	//	std::cout << "x and y are not equal" << std::endl;
	//}

	//double x = 10.0;
	//double y = 2.0; // may not execute as expected due to floating-point precision issues
	//if (x == y)
	//{
	//	std::cout << "x and y are equal" << std::endl;
	//}
	//else
	//{
	//	std::cout << "x and y are not equal" << std::endl;
	//}

	const double x = 100000.123456789;
	const double a = 200000.123456789;

	double y = (x + a) / x; // 2.9999987654336340
	// double z = 1.0 + (a / x);  // 2.9999987654336344 low‑order digits get rounded because the mantissa cannot hold all digits,
	// the least significant digits are lost due to floating-point precision limitations

	//if (y == z) 
	//{
	//	std::cout << "y and z are equal" << std::endl;
	//} 
	//else 
	//{
	//	std::cout << "y and z are not equal" << std::endl;
	//}

	double z = x / y; // does not execute as expected due to floating-point precision issues, and using the == operator to compare them directly.
	if (x == z) 
	{
		std::cout << "x and z are equal" << std::endl;
	} 
	else 
	{
		std::cout << "x and z are not equal" << std::endl;
	}

	//its better to use a tolerance value when comparing floating-point numbers, such as:

	const double epsilon = 1e-10; // define a small tolerance value, 
	if (std::abs(x - z) < epsilon) 
	{
		std::cout << "x and z are approximately equal" << std::endl;
		std::cout << z << std::endl;
		std::cout << x << std::endl;

	} 
	else 
	{
		std::cout << "x and z are not approximately equal" << std::endl;
		std::cout << z << std::endl; // we can use debuggin and breakpoints to see the values the variables store, and why they are not equal. 
		std::cout << x << std::endl;
	}

	// This teaches us that when working with floating-point numbers, we should be cautious about direct comparisons due to precision limitations.


	return 0;
}