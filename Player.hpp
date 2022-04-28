//
// Created by bravo8234 on 26/04/2022.
//

#ifndef EX4_CPP_A_PLAYER_H
#define EX4_CPP_A_PLAYER_H
#pragma once
#include <utility>
#include "stdexcept"
#include "vector"
#include "string"
#include "Game.hpp"
namespace coup{
    class Player{
    public:
        Game& game;
        std::string name;
        std::string role;
        int id;
        unsigned int coins;
        std::string lastAction;
        Player(Game& game, std::string name):coins(0), game(game),name(std::move(name)),id((int)game.players().size()+1){};
        void income(){this->coins += 1;};
        void foreign_aid(){this->coins += 2;};
        virtual void coup(Player& player);
    };
}
#endif //EX4_CPP_A_PLAYER_H
