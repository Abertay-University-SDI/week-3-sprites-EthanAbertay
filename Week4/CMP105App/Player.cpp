#include "Player.h"

Player::Player()
{
	setPosition(sf::Vector2f(100,100));
	setSize(sf::Vector2f(100, 100));
	setVelocity(0.f, 0.f);

	mushroom.loadFromFile("gfx/Mushroom.png");
	setTexture(&mushroom);
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D)) {
		//go right
		setVelocity(getVelocity().x + 0.1, getVelocity().y);
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		//go left
		setVelocity(getVelocity().x - 0.1, getVelocity().y);
	}
}

void Player::update(float dt)
{
	move(velocity * dt);
}
