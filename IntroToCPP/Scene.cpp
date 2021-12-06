#include "Scene.h";
#include <iostream>;


Scene::Scene()
{
	m_actorCount = 0;
	m_actors = ActorArray();
}

Scene::~Scene()
{
	delete[] m_actors;
}

bool Scene::getStarted()
{
	m_started = true;
	return m_started;
}

void Scene::addActor(Actor* actor)
{
	m_actors.addActor(actor);
}

bool Scene::removeActor(Actor* actor)
{
	return m_actors.removeActor(actor);
}


void Scene::start()
{
}

void Scene::update()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		if (!m_actors.getActor(i)->getStarted())
		{
			m_actors.getActor(i)->start();
		}

		m_actors.getActor(i)->update();
	}
}

void Scene::draw()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors.getActor(i)->draw();
	}
}

void Scene::end()
{
	for (int i = 0; i < m_actorCount; i++)
	{
		m_actors.getActor(i)->end();
	}
}
