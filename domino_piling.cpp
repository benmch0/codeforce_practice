#include <iostream>


int main()
{
	int m, n, num_of_doms;

	std::cin >> m >> n;

	int area = m * n;

	num_of_doms = area / 2;

	std::cout << num_of_doms;
}