#include "Duke.hpp"
namespace coup{
    Duke::Duke(Game &game, std::string name) : Player(game, std::move(name)) {
        this->roleP = "Duke";
    }

    void Duke::block(Player &player) {
        this->game.checkTurn(*this);
        if(player.lastAction != "foreign_aid")
        {
            throw std::logic_error("no action to block");
        }
        player.currentCoins -= 2;

    }
}

