#include "Game.h"
#include <iostream>
#include <random>


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
        std::cout << "Enter coordinates: " << std::endl;




    } while (true);
}