#include "Entity.hpp"
#include "NoFriendlyFireException.hpp"

Entity::Entity(std::string aEntityName, int aMaxLife, int aDamage, int aArmor)
{
    this->entityName = aEntityName;
    this->maxLife = aMaxLife;
    this->currentLife = aMaxLife;
    this->damage = aDamage;
    this->armor = aArmor;
}

std::string Entity::getEntityName()
{
    return this->entityName;
}

int Entity::getArmor()
{
    return this->armor;
}

int Entity::getDamage()
{
    return this->damage;
}

int Entity::getLife()
{
    return this->currentLife;
}

void Entity::setDamage(int aDamage)
{
    this->damage = aDamage;
}

void Entity::setMaxLife(int aMaxLife)
{
    float percent = (this->currentLife / this->maxLife);

    this->maxLife = aMaxLife;
    this->currentLife = (int) this->maxLife * percent;
}

void Entity::setArmor(int aArmor)
{
    this->armor = aArmor;
}

void Entity::receiveDamage(int aDamage)
{
    aDamage = aDamage - (aDamage * (armor / 100));
    this->currentLife -= aDamage;
    if (this->currentLife < 0)
    {
        this->currentLife = 0;
    }
}

void Entity::attackEnemy(Entity enemy)
{
    enemy.receiveDamage(this->damage);
}