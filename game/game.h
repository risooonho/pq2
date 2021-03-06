//
// Created by nbollom on 25/05/16.
//

#ifndef PQ2_GAME_H
#define PQ2_GAME_H

#include <cstdint>
#include <random>
#include <memory>
#include "types.h"
#include "newgame.h"

class Game {

private:
    std::shared_ptr<std::mt19937_64> engine;
    std::string filename;
    game::GameState game_state;
    Character character;

    void LevelUp();
    void WinStat();
    void WinSpell();
    void WinItem();
    void WinEquip();
    void CompleteAct();
    void InterplotCinematic();
    void Dequeue();
    void MonsterTask();
    void CompleteQuest();
    std::string Sick(int64_t level, std::string name);
    std::string Young(int64_t level, std::string name);
    std::string Big(int64_t level, std::string name);
    std::string Special(int64_t level, std::string name);



    std::string InterestingItem();

public:
    Game();
    void SetDaemonMode();
    file::LoadError LoadGame(std::string filename_path);
    file::SaveError SaveGame(std::string filename_path = "");
    std::shared_ptr<NewGame> StartNewGame();
    void Tick(uint64_t ms); //advances the game clock by the specified milliseconds;
    void Close();

    game::GameState GetState();
    Character GetCharacter();

    uint64_t GetLevelUpMaxValue();
    uint64_t GetEncumbrance();
    uint64_t GetEncumbranceMaxValue();
    uint64_t GetPlotMaxValue();

};

#endif //PQ2_GAME_H
