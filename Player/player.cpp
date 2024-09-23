#include "player.hpp"
#include <iostream>


Player::Player(std::string name):playerName(name),health(100){}

void Player::attack(){
    std::cout <<  "This player" <<playerName<< "attacks\n";

}

void Player::takeDamage(int damage){
    health -= damage;
    if(health < 0){
        health = 0;
    }
}

int Player::getHealth() const {
    return health;
}
