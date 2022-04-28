#include "Ambassador.hpp"

#include <utility>
namespace coup{
    void Ambassador::transfer(Player &takeFrom, Player &giveTo) {
        if(this->game.getTurn() != this->id)
        {
            throw std::logic_error("not this players turn");
        }
        takeFrom.coins -= 1;
        giveTo.coins +=1;
    }
    void Ambassador::block(Player &player) {
        if(this->game.getTurn() != this->id)
        {
            throw std::logic_error("not this players turn");
        }
        if(player.role != "Captain")
        {
            throw std::logic_error("can only block captain");
        }
        player.coins -= 2;
    }

    Ambassador::Ambassador(Game &game, std::string name) : Player(game, std::move(name)) {
        this->role = "Ambassador";
    }
}
