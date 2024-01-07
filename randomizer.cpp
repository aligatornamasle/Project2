#include "Randomizer.h"

int Randomizer::getRandomCislo()
{
    std::uniform_int_distribution<int>dist(60, 80);
    return dist(rd);
}
