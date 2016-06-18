//
// Created by nbollom on 30/05/16.
//

#ifndef PQ2_PQ2GUI_H
#define PQ2_PQ2GUI_H

#include <memory>
#include "../game/game.h"

class GUI {

private:

protected:
    std::shared_ptr<Game> _game;

    GUI(std::shared_ptr<Game> game); //cannot directly instantiate base class

public:
    virtual void Run() = 0;

};

#endif //PQ2_PQ2GUI_H
