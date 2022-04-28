//
// Created by bravo8234 on 26/04/2022.
//

#ifndef EX4_CPP_A_GAME_H
#define EX4_CPP_A_GAME_H
#pragma once
#include "iostream"
#include "vector"
#include "Player.hpp"

namespace coup{
    class Player;
    class Game{
    private:
        std::vector<Player> gamePlayers;
        int countPlayers;
        short currentPlayer;
        int currentTurn;
    public:
        std::vector<Player> dyingPlayers;
        Game():gamePlayers(std::vector<Player>()),countPlayers(0), dyingPlayers(std::vector<Player>()),currentPlayer(1),currentTurn(1){};
        int getCurrentPlayerID() const{return currentPlayer;};
        int getTurn() const{return currentTurn;};
        void checkTurn(const Player& player) const;
        std::vector<std::string> players();
        void killPlayer(Player& player);
        void resuractePlayer(Player& player);
        std::string turn();
    };
}
#endif //EX4_CPP_A_GAME_H
