#include "pelota.h"


Pelota::Pelota()
{

    _velocity = { 0,0 };
    _texture.loadFromFile("imagenes/pelota.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height/2);
    _sprite.setPosition(600, 760);
    _sprite.setScale(0.15, 0.15);
    contador = 0.0;
}


void Pelota::disparo(float deltatime)
{
    cout << deltatime  << "deltatime" << endl;
   
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        _positionInitial = false;
        aux = deltatime;
    }
       
    if (!_positionInitial)
    {
        cout << deltatime << "entre a la bandera" << endl;
        _velocity = { 0, 10 };
        _sprite.move(_velocity);
        if (_sprite.getPosition().y < 800 - deltatime * 26)
        {
            _velocity = { 0, 0 };
            _sprite.move(_velocity);
            _positionInitial = false;
        }
    }



    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        _positionInitial2 = false;
        _velocity = { -7, 10 };
    }
    if (!_positionInitial2)
    {
        _sprite.move(-_velocity);
        if (_sprite.getPosition().y < 800 - deltatime * 26)
        {
            _velocity = { 0, 0 };
            _sprite.move(_velocity);
            _positionInitial2 = true;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        _positionInitial3 = false;
        _velocity = { 15,  10 };
    }
    if (!_positionInitial3)
    {
        _sprite.move(-_velocity);
        if (_sprite.getPosition().y < 800 - deltatime * 26)
        {
            _velocity = { 0, 0 };
            _sprite.move(_velocity);
            _positionInitial3 = true;
        }
    }
}

float Pelota::cronometro()
             {
   
                 if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
                 {
                     BanderaCronometro = false;
                     sleep_for(milliseconds(50));
                     contador++;
                 }
                 else {
                     BanderaCronometro = true;
                 }

                 if (contador >= 30) {
                     contador = 30;
                 }
                
                 if (BanderaCronometro) {
                     contador = 0;
                 }
                 if (contador > 0) {
                 aux = contador;
                 }
                 return aux;
                 
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

