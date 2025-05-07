#pragma once
#include "Player.h"
class Enemy : public Player
{
public:
	Enemy();
	~Enemy();

	void update(float dt);
	void setWindow(sf::RenderWindow* wnd);
private:
	sf::Texture goomba;
	sf::RenderWindow* window;
};

