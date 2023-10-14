#include "pelota.h"


Pelota::Pelota()
{

    _velocity = { 0,0 };
    _texture.loadFromFile("imagenes/pelota.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height/2);
    _sprite.setPosition(600, 760);
    _sprite.setScale(0.15, 0.15);


};


void Pelota::disparo()
{
        float deltatime = 2;
        
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        _positionInitial = false;
        }

        if (!_positionInitial)
        {
            _velocity = { 0, 7 };
            _sprite.move(-_velocity );
            if (_sprite.getPosition().y <800- deltatime*266)
            {
                _velocity = { 0, 0 };
                _sprite.move(_velocity);
                _positionInitial = true;
            }
        }


       
       
}

void Pelota::setPosition()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
    {
        std::cout << "set posicion" << std::endl;
        _sprite.setPosition(600, 760);

        _positionInitial = true;
    }
}



void Pelota::draw(sf::RenderWindow& window)
{
    window.draw(_sprite);
}

