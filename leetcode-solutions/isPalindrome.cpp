#include <iostream>

bool isPalindrome(int x)
{

    int reversed = 0;
    int temp = x;

    while (x != 0)
    {
        int last_digit = x % 10;
        reversed = reversed * 10;
        reversed = reversed + last_digit;
        x = x / 10;
    }

    if (reversed == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
	int number;
    int i = 1;
    std::cin >> number;
	while(i--)
	{
        isPalindrome(number);
		if (isPalindrome(number)== true)
		{
			std::cout << "true";
		}
		else
		{
			std::cout << "false";
		}
	}
}