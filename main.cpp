#include <iostream>
#include <time.h>

int main()
{
	unsigned int pin = 0;

	std::cout << "Enter PIN: ";
	std::cin >> pin;

	unsigned int start = clock();

	for (unsigned int i = 0; i != pin; ++i)
	{
		if (i == pin)
			break;
	}

	unsigned int end = clock();

	std::cout << "Time needed to crack you PIN -> " << pin << std::endl;
	std::cout << "Milliseconds: " << (end - start) << std::endl;
	std::cout << "Seconds: " << (end - start) / 1000 << std::endl;
	std::cout << "Minute: " << ((end - start) / 1000) / 60 << std::endl;

	return 0;
}
