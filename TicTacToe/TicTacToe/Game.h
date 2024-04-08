#pragma once
#include "Board.h"
#include <iostream>
#include <string>

enum class Player
{
	X,
	O,
	None
};

std::ostream& operator<<(std::ostream& os, const Player& player);

class Game
{
public:
	Board board;
	Player playerX, playerO;
	Game();
	bool Place(Player player, Board::BoardType pos);
	bool IsWon();
	void Run();
	Player StartingPlayer();
};

