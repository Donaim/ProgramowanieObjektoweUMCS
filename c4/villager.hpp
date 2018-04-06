#pragma once

#include <array>
#include <iostream>
#include <cstdlib>

enum class Sex {
    Male,
    Female,
};

using std::string;
using std::array;

class Villager {
    const string name_;
    int age_;
    Sex sex_;

    const static array<const char*, 10> rand_names;
    static string gen_rand_name() {
        int r = rand() % rand_names.size();
        return string{rand_names[r]};
    }

public:
    const static int max_age;
    const static int max_sex_age;
    const static int min_sex_age;

    Villager(string name, int age, Sex sex) : name_ {name}, age_{age}, sex_{sex} {
        std::printf("Welcome %s to our village!", name_.c_str());
    }
    Villager() : name_{gen_rand_name()}, age_{rand() % max_age}, sex_{(Sex)(rand() % 2)} {
        std::printf("New villager was born! God nammed him \"%s\" ", name_.c_str()); 
    }
    
    string name() const { return name_; }
    int age() const { return age_; }
    Sex sex() const { return sex_; }

    void live() {
        age_++;
        if (age_ > max_age) {
            delete this;
        }
    }

    bool can_have_children() const {
        return age_ >= min_sex_age && age_ <= max_sex_age;
    }

    ~Villager() {
        std::printf("Sad news.. %s has left this world. Rest in peace.\n", name_.c_str());
    }
};

const array<const char*, 10> Villager::rand_names = {
    "Durineg Flintbringer",
    "Barizmaeth Treasurebrow",
    "Fomdarlug Lightdigger",
    "Houdrorlun Steelaxe",
    "Agruik Kegblade",
    "Krognan Ashhorn",
    "Doznaeck Ironshoulder",
    "Elrbar Stronghead",
    "Lokdrec Blacktoe",
    "Thatrorlug Blessedsword"
};

const int Villager::max_age = 35;
const int Villager::min_sex_age = 13;
const int Villager::max_sex_age = 30;
