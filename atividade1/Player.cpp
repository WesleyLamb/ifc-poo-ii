#include "Player.hpp"
#define GROWTH_RATE 1.3
#define PLAYER_INITIAL_HP 100
#define PLAYER_INITIAL_DAMAGE 10
#define PLAYER_INITIAl_ARMOR 5

Player::Player(std::string aPlayerName): Entity(aPlayerName, PLAYER_INITIAL_HP, PLAYER_INITIAL_DAMAGE, PLAYER_INITIAl_ARMOR)
{
    this->nextLevelXp = 10;
    this->xp = 0;
    this->currentLevel = 1;
}

void Player::earnXp(int aXp)
{
    this->xp += aXp;
    if (this->xp == this->nextLevelXp)
        this->levelUp();
}

void Player::levelUp()
{
    this->nextLevelXp *= GROWTH_RATE;
    this->currentLevel++;
    this->setDamage(this->getDamage() * GROWTH_RATE);
    this->setArmor(this->getArmor() * GROWTH_RATE);
}
