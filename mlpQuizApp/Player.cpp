//
// Created by Paulo Ricardo Ramos da Rosa on 21/10/18.
//
#include "Player.h"
#include <iostream>
#include <string>


Player::Player(std::string name):Person(name)
{
    score = 0;
}
Player::~Player()
{

}
int Player::getScore()
{
    return this->score;
}
void Player::setScore(int score)
{
    this->score = score;
}
void Player::printName()
{
    std::cout<< "Meu nome é "<< getName() << " e minha pontuação é " << this->score << std::endl;
}


