#include <iostream>
int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a >> b >> c >> d;
	for (int i = 0; i <= 1000; i++)
	{
		if (a * i * i * i + b * i * i + c * i + d == 0)
		{
			std::cout << i;
		}
		else
		{
			std::cout << std::endl;
		}
	}
	return EXIT_SUCCESS;
}
	