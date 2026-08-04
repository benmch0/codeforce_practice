#include <iostream>


int main()
{
	int n, k;
	int idx = 0;
	int count = 0;

	// take in the amount of players and also k finisher score.
	std::cin >> n >> k;


		int numbers[n];
		for (int i = 0; i < n; i++) 
		{
        	std::cin >> numbers[i];
    	}

    	while(idx < n)
		{
        	if((numbers[k - 1] <= numbers[idx]) && (numbers[idx] > 0))
        	{
        		count++;
        	}
        	idx++;
    	}	
	std::cout << count;
}