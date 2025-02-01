#include <iostream>
#include "chef.h"

using namespace std;

int main()
{
    Chef gordon = Chef("Gordon");
    italianChef mario = italianChef("Mario");
    gordon.makeSalad(9);
    gordon.makeSoup(6);
    mario.makeSoup(22);
    mario.askSecret("pizza", 15, 15);
    return 0;
}
