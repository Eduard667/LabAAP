#include <iostream>

int main()
{
	float temp;
	float celsius;

	std::cout << "Enter temperature in Fahrenheit: ";
	std::cin >> temp;
	celsius = 5.0 / 9.0 * (temp - 32); // We have to make these numbers floats to avoid integer division in this case, otherwise 5/9 would evaluate to 0
	// which would make the whole expression evaluate to 0
	std::cout << "Temperature in Celsius: " << celsius << std::endl;
}