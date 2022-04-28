#include "Assassin.hpp"
namespace coup{
    void Assassin::coup(Player &player) {
        this->game.checkTurn(*this);
        if(this->coins < 3)
        {
            throw std::logic_error("cant assassinate with less then 3 coins");
        }
        this->game.killPlayer(player);
    }

    Assassin::Assassin(Game &game, std::string name) : Player(game, std::move(name)) {
        this->role = "Assassin";
    }
}