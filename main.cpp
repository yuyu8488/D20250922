#include <iostream>

using namespace std;



//********** 10
// ********   8
//  ******    6
//   ****     4
//    **      2
int main()
{
	int Number[10] = { 0 };

	int Count = 0;
	cin >> Count;
	

	for (int i = 1; i <= Count; i++)
	{
		for (int j = 1; j <= 2 * Count - (i - 1); j++)
		{	
			if (i > j)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}

	return 0;
}