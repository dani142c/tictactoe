#pragma once
#include <iostream>
#include <array>

class Board
{
public:
	using BoardType = std::array<std::array<char, 3>, 3>; // 0 will indicate unoccupied.

	BoardType board;


	Board();
	void PrintBoard() const;
};

