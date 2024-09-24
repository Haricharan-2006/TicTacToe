// Tic Tac Toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char a[3][3];
void initialise(char a[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = '_';
		}
	}
}
void print(char a[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void set(char a[3][3], int i, int j, char ch)
{
	a[i - 1][j - 1] = ch;
	int k;
	for (k = 0; k < 3; k++)
	{
		if (a[i - 1][k] != ch)
		{
			break;
		}
	}
	if (k == 3)
	{
		cout << "the player with symbol " << ch << " won the game" << endl;
		print(a);
		exit(0);
	}
	for (k = 0; k < 3; k++)
	{
		if (a[k][j-1] != ch)
		{
			break;
		}
	}
	if (k == 3)
	{
		cout << "the player with symbol " << ch << " won the game" << endl;
		print(a);
		exit(0);
	}
	if (a[0][0] == ch && a[1][1] == ch && a[2][2] == ch)
	{
		cout << "the player with symbol " << ch << " won the game" << endl;
		print(a);
		exit(0);
	}
	if (a[0][2] == ch && a[1][1] == ch && a[2][0] == ch)
	{
		cout << "the player with symbol " << ch << " won the game" << endl;
		print(a);
		exit(0);
	}
}
int main()
{
	initialise(a);
	char ch1, ch2;
	cout << "Select the symbol for player-1: ";
	cin >> ch1;
	cout << endl << "Select the symbol for player-2: ";
	cin >> ch2;
	cout << endl;
	int i, j, k = 1;
	do {
		if (k % 2 == 1)
		{
			cout << "PLAYER_1" << endl;
			cout << "enter the row and column that symbol has to be inserted : " << endl;
			cin >> i >> j;
			if (a[i - 1][j - 1] == '_')
			{
				set(a, i, j, ch1);
				cout << endl;
				print(a);
				k++;
			}
			else
			{
				cout << "entered row and column is already full.Please re-enter.";
			}
		}
		else
		{
			cout << "PLAYER_2" << endl;
			cout << "enter the row and column that symbol has to be inserted : " << endl;
			cin >> i >> j;
			if (a[i - 1][j - 1] == '_')
			{
				set(a, i, j, ch2);
				cout << endl;
				print(a);
				k++;
			}
			else
			{
				cout << "entered row and column is already full.Please re-enter.";
			}
		}
	} while (k <= 9);
if(k > 9)
{
	cout << "no one won the match";
	exit(0);
}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
