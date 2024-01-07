#pragma once
#include <random>
class Randomizer
{
private:
	std::random_device rd;
public:
	int getRandomCislo();
	Randomizer() = default;
	~Randomizer() = default;
};
