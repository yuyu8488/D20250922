

#include <iostream>

int main()
{
	int Total = 0;
	for (int i = 1; i <= 100; i++)
	{
		Total += i;
	}

	int Total3 = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			Total3 += i;
		}
	}
	
	std::cout << "Total : " << Total << std::endl;
	std::cout << "Total (3�ǹ��) : " << Total3 << std::endl;

	return 0;
}


