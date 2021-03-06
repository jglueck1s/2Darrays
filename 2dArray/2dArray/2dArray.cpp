//Checker Board App
//John G

#include "pch.h"
#include <iostream>
#include <string>

class checkerBoard
{
public:
	void initBoard()
	{
		for (int y = 0; y < 8; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				if (((x + y) % 2) == 0)
				{
					board[y][x] = '.';

				}
				else
				{
					board[y][x] = '*';
				}
			}
		}
	}
	void printBoard()
	{
		for (int y = 0; y < 8; y++)
		{
			for (int x = 0; x < 8; x++)
			{
				std::cout << board[y][x];
			}
			std::cout << std::endl;
		}
	}
private:
	char board[8][8];//this makes an 8x8 2 dimensional array.
};
int main()
{
	checkerBoard checkerBoard;
	checkerBoard.initBoard();
	checkerBoard.printBoard();


	return 0;
}
