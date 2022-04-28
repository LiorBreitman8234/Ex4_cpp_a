#include "Game.hpp"
namespace coup{

    void Game::checkTurn(const Player &player) const {
        if(this->currentTurn != player.id)
        {
            throw std::logic_error("wrong player turn");
        }

    }

    void Game::killPlayer(Player &player) {
        std::move(this->gamePlayers.begin()+player.id-1,this->gamePlayers.begin()+player.id, dyingPlayers);

    }

    std::vector<std::string> Game::players() {
        std::vector<std::string> names;
        for(auto & gamePlayer : this->gamePlayers)
        {
            names.push_back(gamePlayer.nameP);
        }
        return names;
    }

    void Game::resuractePlayer(Player &player) {
        std::move(this->dyingPlayers.begin(),this->dyingPlayers.begin()+1, gamePlayers);
    }

    std::string Game::turn() {
        for(auto & p: this->gamePlayers)
        {
            if(p.id == this->currentPlayer)
            {
                return p.nameP;
            }
        }
    }

}