#include "Entity.h";

Entity::Entity()
{
	m_icon = '\0';
	m_health = 0;
	m_attackPower = 0;
	m_defensePower = 0;
}

Entity::Entity(char icon, float health, float attackPower, float defensePower)
{
	m_icon = icon;
	m_health = health;
	m_attackPower = attackPower;
	m_defensePower = defensePower;
}

float Entity::takeDamage(float damageAmount)
{
	float damageTaken = damageAmount - getDefensePower();

	if (damageTaken < 0)
		damageTaken = 0;

	m_health -= damageTaken;

	if (m_health < 0)
		m_health = 0;

	return damageTaken;
}

float Entity::attack(Entity* entity)
{
	return entity->takeDamage(getAttackPower());
}
