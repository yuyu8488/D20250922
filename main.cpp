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
	{ 1,0,0,0,1,1,1,0,0,1 },
	{ 1,0,0,0,1,0,0,0,0,1 },
	{ 1,0,0,0,1,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
};

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

// ���(Mapping) -> �׸����� �ٲܿ���.
char Sprites[10] = { ' ', '*' };
int KeyCode = 0;

bool bIsRunning = true;

void Input() 
{
	// Input
	KeyCode = _getch();
}

bool Predict(int NewX, int NewY)
{
	if (World[NewY][NewX] == 0)
	{
		return true;
	}
	return false;
}

void Process()
{
	// Process
	if (KeyCode == 'w')
	{ 
		if (Predict(PlayerX, PlayerY - 1))
		{
			PlayerY--;
		}
	}
	else if (KeyCode == 's')
	{
		if (Predict(PlayerX, PlayerY + 1))
		{
			PlayerY++;
		}
	}
	else if (KeyCode == 'a')
	{
		if (Predict(PlayerX - 1, PlayerY))
		{
			PlayerX--;
		}
	}
	else if (KeyCode == 'd')
	{
		if (Predict(PlayerX + 1, PlayerY))
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
	// ȭ�鿡 ��� --> ����? OS -> BIOS -> firmware
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