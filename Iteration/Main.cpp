#include <iostream> // required for std::cout and std::endl - general input/output stream objects and being able to interact with the console

int main() // changed from static void main(string[] args)
{
	//int factorialNumber = 5;
	//int factorialTotal = 1;

	//for (int i = 2; i <= factorialNumber; i++)
	//{
	//	factorialTotal *= i;
	//}

	//std::cout << "Factorial of " << factorialNumber << " is " << factorialTotal << std::endl;
	//return 0;


	int sum = 0;
	int count = 0;

	while (true)
	{	
		std::cout << "Enter a number (0 to stop): ";
		int n;
		std::cin >> n;

		if (n == 0)
			break;

		sum += n;
		count++;
	}

	if (count > 0)
		std::cout << "Average = " << static_cast<double>(sum) / count << std::endl; //static cast<double> is used to 
	// convert sum to a double to ensure floating-point division
	else
		std::cout << "No numbers entered." << std::endl;

	return 0; // fairly similar to C#. 

}

// This is very similar to C#'s syntax for the most part, 
// with some differences like the use of 'static void main' 
// instead of 'static void Main' and 'string[] args' instead of 'string[] args'.