

#include <iostream>

int main()
{
	int Total = 0;
	for (int i = 1; i <= 100; i++)
	{
		Total += i;
	}

	int Total3 = 0;
	for (int i = 3; i <= 100; i+=3)
	{
		Total3 += i;
	}
	
	std::cout << "Total : " << Total << std::endl;
	std::cout << "Total (3ÀÇ¹è¼ö) : " << Total3 << std::endl;

	return 0;
}


