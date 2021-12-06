#include "Scene.h";
#include <iostream>;


Scene::Scene()
{
	m_actorCount = 0;
	m_actors[m_actorCount];
}

Scene::~Scene()
{
	delete[] m_actors;
}

bool Scene::getStarted()
{
	m_started = true;
}

void Scene::addActor(Actor* actor)
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

bool Scene::removeActor(Actor* actor)
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

void Scene::start()
{
}

void Scene::update()
{
	for (int i; i < m_actorCount; i++)
	{
		if (!m_started)
		{
			m_actors[i]->start();
		}

		m_actors[i]->update();
	}
}

void Scene::draw()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors[i]->draw();
	}
}

void Scene::end()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors[i]->end();
	}
}
