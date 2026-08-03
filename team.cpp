#include <iostream>

int main()
{
	int n, n2, n3, n4;
	int vote = 0;
	int count = 0;
	// the amount of problems in the competition.
	std::cin >> n;

	while(n--)
	{
		// the line containing the vote results.
		std::cin >> n2 >> n3 >> n4;

		// if 2 of the votes == 1 then add to the count.
		if ((n2 + n3 + n4) > 1)
		{
			count++;
		}
		
	}
	// this is the number of problems they will implement on the contest.
	std::cout << count;
}