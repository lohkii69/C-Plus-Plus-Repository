#include "stdafx.h"

int rangeOfNumbersBothWays()
{

		int v1, v2, i;

		std::cout << "Enter two numbers" << std::endl;

		// Read two values in
		std::cin >> v1;
		std::cin >> v2;

		// Check range of numbers between the two given by user
		if (v1 < v2)
		{
			i = v1;
			for (; i < v2; i++)
			{
				std::cout << i << std::endl;
			}
		}
		else
		{
			i = v2;
			for (; i < v1; i++)
			{
				std::cout << i << std::endl;
			}
		}

		return 0;

}