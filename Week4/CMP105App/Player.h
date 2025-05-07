#pragma once
#include <iostream>
#include "Framework/GameObject.h"

class Player : public GameObject
{
private:
public:

	Player();
	~Player();

	void handleInput(float dt);
	void update(float dt);
	sf::Texture mushroom;
	Input in;
};


