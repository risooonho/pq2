//
// Created by nbollom on 1/06/16.
//

#ifndef PQ2_MONSTERS_H
#define PQ2_MONSTERS_H

#include <string>
#include <random>
#include "types.h"

namespace data {

    const Monster get_random_monster(std::mt19937_64 *engine);

}

#endif //PQ2_MONSTERS_H