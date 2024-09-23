#include "../Player/player.hpp"

#include <iostream>

int main() {
    // Create a Player object
    Player player("Hero");

    // Display the player's initial status
    player.getHealth();

    // // Use the Combat system to attack the player
    // Combat::attack(player, 25);  // Attack player with 25 damage

    // Display the player's status after the attack
    player.getHealth();

    return 0;
}
