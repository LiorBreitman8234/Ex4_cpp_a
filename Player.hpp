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
        std::string nameP;
        std::string roleP;
        int id;
        int currentCoins;
        std::string lastAction;
        Player(Game& game, std::string name):currentCoins(0), game(game),nameP(std::move(name)),id((int)game.players().size()+1){};
        void income(){this->currentCoins += 1;};
        void foreign_aid(){this->currentCoins += 2;};
        virtual void coup(Player& player);
        int coins()const {return this->currentCoins;};
        std::string name()const{return this->nameP;};
        std::string role()const{return this->roleP;};

    };
}
#endif //EX4_CPP_A_PLAYER_H
