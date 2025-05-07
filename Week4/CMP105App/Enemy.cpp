#include "Enemy.h"

Enemy::Enemy()
{
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));

	goomba.loadFromFile("gfx/Goomba.png");
	setTexture(&goomba);

	setVelocity(0.f, 200.f);
	std::cout << "hi";
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	if (getVelocity().y > 0 && getPosition().y + getSize().y > window->getSize().y) {
		setVelocity(0.f, -200.f);
		std::cout << "moving up\n";
	}
	else if (getVelocity().y < 0 && getPosition().y < 0) {
		setVelocity(0.f, 200.f);
		std::cout << "moving down\n";
	}
	move(velocity*dt);
}

void Enemy::setWindow(sf::RenderWindow* wnd)
{
	window = wnd;
}
