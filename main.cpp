// preprocessor: #include 
#include <iostream> // cpp standard
#include <conio.h>  // c   standard
#include <vector> // container 
#include <algorithm>
#include <string>


using namespace std;

//**********
//*        *
//*        *
//*        *
//*        *
//*        *
//*        *
//*        *
//*        *
//**********

int World[10][10] =
{
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
};

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

// 사상(Mapping) -> 그림으로 바꿀예정.
char Sprites[10] = { ' ', '*' };
int KeyCode = 0;

bool bIsRunning = true;

void Input()
{
	// Input
	KeyCode = _getch();


}

void Process()
{
	// Process
	if (KeyCode == 'w')
	{ 
		if (World[PlayerY - 1][PlayerX] == 1)
		{
			return;
		}
		else
		{
			PlayerY--;
		}
	}
	else if (KeyCode == 's')
	{
		if (World[PlayerY + 1][PlayerX] == 1)
		{
			return;
		}
		else
		{
			PlayerY++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (World[PlayerY][PlayerX - 1] == 1)
		{
			return;
		}
		else
		{
			PlayerX--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (World[PlayerY][PlayerX + 1] == 1)
		{
			return;
		}
		else
		{
			PlayerX++;
		}
	}
	else if (KeyCode == 'q')
	{
		bIsRunning = false;
	}


}

void Render()
{
	// 화면에 출력 --> 누가? OS -> BIOS -> firmware
	// Render
	system("cls");
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else
			{
				cout << Sprites[World[Y][X]];
			}
		}
		cout << "\n";
	}
}

int main()
{
	// Frame, DeltaSeconds
	while (bIsRunning)
	{
		Input();
	
		Process();
	
		Render();		
	}

	return 0;
}