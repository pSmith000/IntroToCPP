#include "Engine.h"
#include <iostream>;

Scene** m_scenes;
int m_sceneCount = 0;
Scene* m_currentScene;


bool Engine::m_applicationShouldClose = false;

Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;
	m_currentFighterIndex = 0;
}

Engine::~Engine()
{
	delete m_currentFighter1;
	delete m_currentFighter2;
}

void Engine::run()
{
	start();

	while(!getApplicationShouldClose())
	{
		update();
		draw();
	}

	end();
}

void Engine::addScene(Scene* scene)
{
	Scene** tempArray = new Scene*[m_sceneCount + 1];

	for (int i = 0; i < m_sceneCount; i++)
	{
		tempArray[i] = m_scenes[i];
	}

	tempArray[m_sceneCount] = scene;

	m_scenes = tempArray;

	m_sceneCount++;
}

Scene* Engine::getCurrentScene()
{
	return m_currentScene;
}

void Engine::setCurrentScene(int index)
{
	m_currentScene = m_scenes[index];
}

void Engine::start()
{
	Entity wompus = Entity('W', 30, 11, 0);
	Entity redactedLittleSkeleton = Entity('r', 2, 1, 0);
	Entity unclePhil = Entity('U', 1, 0, 10);

	m_entities[0] = wompus;
	m_entities[1] = redactedLittleSkeleton;
	m_entities[2] = unclePhil;
	m_entityCount = 3;

	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity * [test];

	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void Engine::update()
{
	
	
}

void Engine::draw()
{
	m_currentFighter1->printStats();
	m_currentFighter2->printStats();
	system("pause");
	system("cls");
}

void Engine::end()
{
}
