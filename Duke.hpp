//
// Created by bravo8234 on 26/04/2022.
//

#ifndef EX4_CPP_A_DUKE_H
#define EX4_CPP_A_DUKE_H
#include "Player.hpp"
namespace coup{
    class Duke: private Player{


    public:
        void block(Player& player);
        void tax(){this->coins += 3;};
    };
}
#endif //EX4_CPP_A_DUKE_H
