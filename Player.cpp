#include "Player.hpp"
namespace coup{

    void Player::coup(Player &player) {
        this->game.checkTurn(*this);
        if(this->currentCoins < 7)
        {
            throw std::logic_error("not enough coins to coup");
        }
        this->game.killPlayer(player);
    }
}