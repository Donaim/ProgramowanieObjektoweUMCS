#pragma once

#include "villager.hpp"
#include <functional>

class Household {
    Villager ** population;
    const static int max_population;
    int people_count_;

    void born_child(Villager * a, Villager * b) {
        
    }
public:
    Household(Villager ** owners) : population{owners} {

    }
    int people_count() const { return people_count_; }

    void live() {
        for (int x = 0; x < people_count_; x++) {
            Villager * a = population[x];
            for (int y = 0; y < people_count_; y++) {
                Villager * b = population[y];
                if (a->can_have_children() && b->can_have_children()) {
                    if (a->sex() != b->sex()) {

                    }
                }
            }
        }

        for (int i = 0; i < max_population; i++) {
            if (population[i]->age() < Villager::max_age) {
                population[i]->live();
            }
        }
    }
};

