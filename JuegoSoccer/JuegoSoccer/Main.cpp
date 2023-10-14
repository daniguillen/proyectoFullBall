#include <SFML/Graphics.hpp>
#include "Arquero.h"
#include "Cancha.h"
#include "Arco.h"
#include "Pelota.h"
#include "Jugador.h"
int main()
{
    //resolucion
    sf::RenderWindow window(sf::VideoMode(1200, 800), "FullBall Soccer");
    window.setFramerateLimit(60);


    Arquero portero;
    Jugador pateador;
    Cancha nuevaCancha;
    Arco nuevoArco;
    Pelota balon;
    
    //Game Loop (Update del juego)
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
           


       
        portero.movimientoTecladoArquero();
        portero.getPosicionObjeto();
        balon.setPosition();
        balon.disparo();
       


        window.clear();

        nuevaCancha.draw(window);
        portero.draw(window);
        balon.draw(window);
     //   window.draw(pateador);
        window.display();
        
    }
    //liberacion del juego
    return 0;
}