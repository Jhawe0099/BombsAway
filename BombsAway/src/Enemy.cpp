#include "Enemy.h"
#include "Game.h"

Enemy::Enemy()
{
	
	TheTextureManager::Instance()->load("../Assets/textures/enemy.png", "enemy", TheGame::Instance()->getRenderer());
	setPosition(glm::vec2(448, 192));

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("enemy");
	setWidth(size.x);
	setHeight(size.y);
	setIsColliding(false);
	setType(ENEMY);

}

Enemy::~Enemy()
{
}

void Enemy::draw()
{
	TheTextureManager::Instance()->draw("enemy", getPosition().x, getPosition().y, TheGame::Instance()->getRenderer(), false);
}

void Enemy::update()
{
	// Nothing yet, enemy just spawns and chills there
}

void Enemy::clean()
{
	
}
Enemy2::Enemy2()
{

	TheTextureManager::Instance()->load("../Assets/textures/enemy.png", "enemy", TheGame::Instance()->getRenderer());
	setPosition(glm::vec2(1000, 512));

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("enemy");
	setWidth(size.x);
	setHeight(size.y);
	setIsColliding(false);
	setType(ENEMY2);

	

}

Enemy2::~Enemy2()
{
}

void Enemy2::draw()
{
	TheTextureManager::Instance()->draw("enemy", getPosition().x, getPosition().y, TheGame::Instance()->getRenderer(), false);
}

void Enemy2::update()
{
	// Nothing yet, enemy just spawns and chills there
}

void Enemy2::clean()
{

}