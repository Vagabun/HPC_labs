#pragma once

#include <iostream>
#include <random>
#include <string>
#include <cstdlib>
#include <memory>
#include <queue>
#include <set>

using std::cin;
using std::cout;
using std::endl;
using std::random_device;
using std::uniform_int_distribution;
using std::mt19937;
using std::string;
using std::unique_ptr;
using std::move;
using std::queue;
using std::set;

enum class rand_variants {
    standard, distance, wizard_ability
};

enum heroes {
    knight = 1, wizard, goblin
};

namespace service_functions {
    int rand(rand_variants v);
}