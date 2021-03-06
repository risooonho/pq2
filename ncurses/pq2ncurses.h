//
// Created by nbollom on 26/05/16.
//

#ifndef PQ2_PQ2NCURSES_H
#define PQ2_PQ2NCURSES_H

#include <memory>
#include <string>
#include <stack>
#include <mutex>
#include "pq2gui.h"
#include "game.h"
#include "nview.h"

class NCursesGUI : public GUI {

private:
    std::stack<std::shared_ptr<NView>> view_stack;
    int screen_width;
    int screen_height;
    std::mutex screen_change_lock;
    bool screen_changed;

    bool ProcessMessage(std::string message, void *value);

public:
    NCursesGUI(std::shared_ptr<Game> game);
    virtual ~NCursesGUI();
    void Run() override;

    void ShowMainMenu() override;
    void ShowCharacterCreator() override;
    void ShowGameScreen() override;
    void Close() override;

};

#endif //PQ2_PQ2NCURSES_H
