#pragma once

#include "common.h"

class goblin {

public:
    goblin();
	~goblin();
    int damage();
    void take_damage(int damage);
    void bomb();
    void coward(int damage);
    /*int get_hp();
    void set_hp(int data);*/

private:
    int _health, _attack, _attack_dist;
    static int call_counter;
    int rand_generator();
};

