#pragma once
#include <SFML\Graphics.hpp>
#include "SFML/Graphics.hpp"
#include <iostream>
class Pelota
{

	sf::Sprite _sprite;
	sf::Texture _texture;
	sf::Vector2f _velocity;
	bool _positionInitial = true;
	

public:
	Pelota();
	void disparo();
	void draw(sf::RenderWindow&);
	void setPosition();
	
};