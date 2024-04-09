#pragma once
#include <iostream>
#include <array>

class Board
{
public:
	using BoardType = std::array<std::array<char, 3>, 3>; // 0 will indicate unoccupied.
	BoardType board;

	const std::array<char, 3>& operator[](int index) const {
		return board[index];
	}

	
	Board();
	void PrintBoard() const;
};

