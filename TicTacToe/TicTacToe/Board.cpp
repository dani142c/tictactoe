#include "Board.h"


Board::Board()
{
	for (auto& row : board)
	{
		row.fill('0');
	}
}

void Board::PrintBoard() const
{
	for (const auto& row : board)
	{
		for (char cell : row)
		{
			std::cout << cell << ' ';
		}
		std::cout << std::endl;
	}
}
