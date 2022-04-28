#include "Contessa.hpp"
namespace coup
{
    Contessa::Contessa(Game &game, std::string name) : Player(game, std::move(name)) {
        this->roleP ="Contessa";
    }

    void Contessa::block(Player &player) {
        this->game.checkTurn(*this);
        if(player.roleP != "Assasin"){
            throw std::logic_error("cant stop player that is not assasin");
        }
        if(player.lastAction != "coup")
        {
            throw std::logic_error("no coup to block");
        }
        this->game.resuractePlayer(this->game.dyingPlayers.back());

    }
}
