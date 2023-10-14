#include "pelota.h"
#include <iostream>
#include <iostream>


Pelota::Pelota()
{

    _velocity = { 0,2 };
    _texture.loadFromFile("imagenes/pelota.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height / 2);
  //  _sprite.setPosition(600, 440);
    _sprite.setPosition(600, 474);
    


};





void Pelota::disparo()
{
    if (!_positionInitial)
    {
        _sprite.move(_velocity);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        _positionInitial = false;
    }


    

    if (_sprite.getPosition().x < 0) {

        _sprite.setPosition(0, _sprite.getPosition().y);
    }
    if (_sprite.getPosition().x > 600) {

        _sprite.setPosition(600, _sprite.getPosition().y);
    }


    /* Movimientos en Y */
    // Arriba
    if (_sprite.getPosition().y < 200) 
    {
        _velocity.y =0; 
    }
    // Abajo
    if ( _sprite.getPosition().y> 474) {
        _velocity.y = -_velocity.y;
    }
}

void Pelota::setPosition()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) 
    {
        std::cout << "set posicion" << std:: endl;
    _sprite.setPosition(600, 474);

    _positionInitial = true;
    }
}

void Pelota::draw(sf::RenderWindow& window)
{
    window.draw(_sprite);
}