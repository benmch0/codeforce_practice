#include <iostream>
#include <string.h>

int main()
{
	int n;
	std::string str;
	int x = 0;

	std::cin >> n;

	while(n--)
	{
		std::cin >> str;

		if (str.find("++") != std::string::npos)
		{
			x++;
		}
		else if (str.find("--") != std::string::npos)
		{
			x--;
		}
	}
	std::cout << x;
}