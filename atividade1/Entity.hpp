#ifndef Entity_hpp
#define Entity_hpp

#include <string>

class Entity
{
private:
    std::string entityName;
    int currentLife;
    int maxLife;
    int damage;
    int armor;

protected:
    Entity(std::string aEntityName, int aMaxLife, int aDamage, int aArmor);

public:
    std::string getEntityName();
    int getArmor();
    int getDamage();
    int getLife();
    void setDamage(int aDamage);
    void setMaxLife(int aMaxLife);
    void setArmor(int aArmor);
    void receiveDamage(int aDamage);
    void attackEnemy(Entity enemy);
};

#endif