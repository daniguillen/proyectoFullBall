
#include "Arquero.h"
Arquero::Arquero() {
    Texture_Arquero.loadFromFile("imagenes/Arquero50.png");
    Sprite_Arquero.setTexture(Texture_Arquero);
    //velocidad de movimiento
    movimientoAleatorio = { 2,2 };
  
  
    Sprite_Arquero.setPosition(Sprite_Arquero.getPosition().x, 600);
    Sprite_Arquero.setPosition(Sprite_Arquero.getPosition().y, 290);
    
   

}



void Arquero::movimientoTecladoArquero() {
    /*
    
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        Sprite_Arquero.move(0, -_velocidad);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        Sprite_Arquero.move(0, _velocidad);
    }
   
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        Sprite_Arquero.move(-_velocidad, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        Sprite_Arquero.move(_velocidad, 0);
    }
    */
    Sprite_Arquero.move(movimientoAleatorio);
  
}
void Arquero::getPosicionObjeto() 
{

    
    /*Movimientos en X
    //izquierda
    

    if (Sprite_Arquero.getPosition().x < 100) {
        //Sprite_Arquero.setPosition(400, Sprite_Arquero.getPosition().y);
        movimientoAleatorio.x = -movimientoAleatorio.x;
    }

    /*Movimientos en Y
    //arriba
    if (Sprite_Arquero.getPosition().y <00) {
       // Sprite_Arquero.setPosition(Sprite_Arquero.getPosition().x, 290);
        movimientoAleatorio.y=-movimientoAleatorio.y;

    }
    //derecha
    if (Sprite_Arquero.getPosition().x + Sprite_Arquero.getGlobalBounds().width > 800) {
     //   Sprite_Arquero.setPosition(740, Sprite_Arquero.getPosition().y);
        movimientoAleatorio.x = -movimientoAleatorio.x;
    }
    //este es abajo
    if (Sprite_Arquero.getPosition().y + Sprite_Arquero.getGlobalBounds().height > 400) {
     //   Sprite_Arquero.setPosition(Sprite_Arquero.getPosition().x, 306);
        movimientoAleatorio.y = -movimientoAleatorio.y;

   }

*/


    if (Sprite_Arquero.getPosition().x < 400 ||
        Sprite_Arquero.getPosition().x + Sprite_Arquero.getGlobalBounds().width > 800) {
        movimientoAleatorio.x = -movimientoAleatorio.x;
    }

    /* Movimientos en Y */
    // Arriba
    if (Sprite_Arquero.getPosition().y <280 ||
        Sprite_Arquero.getPosition().y + Sprite_Arquero.getGlobalBounds().height > 400) {
        movimientoAleatorio.y = -movimientoAleatorio.y;
    }
  


}

void Arquero::draw(sf::RenderWindow& window)
{
    window.draw(Sprite_Arquero);
}

