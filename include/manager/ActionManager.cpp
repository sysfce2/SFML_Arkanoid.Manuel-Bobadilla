//
// Created by Facundo Barafani on 14/6/21.
//

#include "ActionManager.h"

ActionManager::ActionManager(Player& p, tmx::Vector2f pos, int window){
    player = &p;
    posicion = pos;
// Key Management
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        if (posicion.x > 54){
            posicion.x -= 3;
            player->setPosition(posicion);
        }
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        if (window - posicion.x - 54 > player->getTexture().getSize().x ){
            posicion.x += 3;
            player->setPosition(posicion);
        }
    }
}
