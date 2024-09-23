#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using string = std::string ;


class Player{
    public:
    Player(string name);        
    void attack();
     void takeDamage(int damage);
     int getHealth() const;
    
    private:
    string playerName;
    int health;
};





#endif

