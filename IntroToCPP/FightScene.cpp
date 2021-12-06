#include "FightScene.h"

void FightScene::start()
{
	Actor wompus = Actor('W', 30, 11, 0);
	Actor redactedLittleSkeleton = Actor('r', 2, 1, 0);
	Actor unclePhil = Actor('U', 1, 0, 10);

	addActor(wompus);
	m_entities[1] = redactedLittleSkeleton;
	m_entities[2] = unclePhil;
	m_entityCount = 3;

	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity * [test];
}
