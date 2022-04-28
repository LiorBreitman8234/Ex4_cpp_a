#include "Captain.hpp"

#include <utility>

namespace coup {
    void Captain::block(Player &player) {
        this->game.checkTurn(*this);
        if (player.roleP != "Captain") {
            throw std::logic_error("can only block a captain");
        }
        if (player.lastAction == "steal") {
            player.currentCoins -= 2;
        }
    }

    void Captain::steal(Player &player) {
        this->game.checkTurn(*this);

    }

    Captain::Captain(Game &game, std::string name) : Player(game, std::move(name)) {
        this->roleP = "Captain";
    }
}