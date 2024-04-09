#include "Game.h"
#include "Board.h"
#include <iostream>
#include <random>
#include <array>


std::ostream& operator<<(std::ostream& os, const Player& player) {
    switch (player) {
    case Player::X:
        os << "X";
        break;
    case Player::O:
        os << "O";
        break;
    case Player::None:
        os << "None";
        break;
    }
    return os;
}

Game::Game() 
{
	playerX = Player::X;
	playerO = Player::O;
}

Player Game::StartingPlayer() {
    std::random_device rd; // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator
    std::uniform_int_distribution<> distrib(1, 2); // Define the range

    int randomNumber = distrib(gen);

    if (randomNumber == 1)
        return Player::X;
    else
        return Player::O;
}

void Game::Run()
{
	Player startingPlayer = StartingPlayer();

    do
    {
        int row;
        std::cout << "Enter Row: " << std::endl;
        std::cin >> row;

        int column;
        std::cout << "Enter Column: " << std::endl;
        std::cin >> column;

        Game::board[row][column];

        //if (Game::IsValidPos())
        //{
        //    // continue
        //}
        //break; // tjek om spillet er vundet, eller der ikke er flere positioner tilgængeligepp

    } while (true);
}