#include <iostream>
#include <algorithm>

int main()
{
	int n;
	int a,b,c;
	int count = 0;

	std::cin >> n;

	while(n--)
	{
		std::cin >> a >> b >> c;
		int max = std::max({a, b, c});
		int min = std::min({a, b, c});

		while(a != b && a != c && b != c)
		{
			a++;
		}
		std::cout << "Min: " << min << "\n";
		std::cout << "Max: " << max << "\n";

	}
}