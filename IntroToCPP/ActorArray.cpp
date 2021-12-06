#include "ActorArray.h"

void ActorArray::addActor(Actor* actor)
{
	Actor** tempArray = new Actor * [m_actorCount + 1];

	for (int i = 0; i < m_actorCount; i++)
	{
		tempArray = m_actors;
	}

	tempArray[m_actorCount] = actor;

	m_actors = tempArray;

	m_actorCount++;
}

bool ActorArray::removeActor(Actor* actor)
{
	bool actorRemoved = false;

	Actor** tempArray = new Actor * [m_actorCount - 1];

	int j = 0;
	for (int i = 0; i < m_actorCount - 1; i++)
	{
		if (m_actors[i] != actor)
		{
			tempArray[j] = m_actors[i];
			j++;
		}
		else
		{
			actorRemoved = true;
		}
	}

	if (actorRemoved)
	{
		m_actors = tempArray;
	}

	m_actorCount--;

	return actorRemoved;
}

bool ActorArray::removeActor(int index)
{
	if (index < 0 || index >= m_actorCount)
		return false;

	bool actorRemoved = false;

	Actor** tempArray = new Actor * [m_actorCount - 1];

	int j = 0;
	for (int i = 0; i < m_actorCount - 1; i++)
	{
		if (i != index)
		{
			tempArray[j] = m_actors[i];
			j++;
		}
		else
		{
			actorRemoved = true;
		}
	}

	if (actorRemoved)
	{
		m_actors = tempArray;
	}

	m_actorCount--;

	return actorRemoved;
}

Actor* ActorArray::getActor(int index)
{
	if (index < 0 || index >= m_actorCount)
		return nullptr;

	return m_actors[index];
}

bool ActorArray::contains(Actor* actor)
{
	for (int i = 0; i < m_actorCount; i++)
	{
		if (m_actors[i] == actor)
			return true;
	}

	return false;
}

