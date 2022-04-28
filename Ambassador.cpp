#include "Ambassador.hpp"

#include <utility>
namespace coup{
    void Ambassador::transfer(Player &takeFrom, Player &giveTo) {
        if(this->game.getTurn() != this->id)
        {
            throw std::logic_error("not this players turn");
        }
        takeFrom.currentCoins-= 1;
        giveTo.currentCoins +=1;
    }
    void Ambassador::block(Player &player) {
        if(this->game.getTurn() != this->id)
        {
            throw std::logic_error("not this players turn");
        }
        if(player.roleP != "Captain")
        {
            throw std::logic_error("can only block captain");
        }
        player.currentCoins -= 2;
    }

    Ambassador::Ambassador(Game &game, std::string name) : Player(game, std::move(name)) {
        this->roleP = "Ambassador";
    }
}
