#pragma once
#include <SFML\Graphics.hpp>
#include "SFML/Graphics.hpp"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;
class Pelota
{

	sf::Sprite _sprite;
	sf::Texture _texture;
	sf::Vector2f _velocity;
	bool _positionInitial = true;
	bool _positionInitial2 = true;
	bool _positionInitial3 = true;
	float contador;
	bool BanderaCronometro = false;
	float aux = 0.0;

public:
	Pelota();
	void disparo(float deltatime);
	void draw(sf::RenderWindow&);
	void setPosition();
	float cronometro();
	
	
};