#pragma once
#include <vector>
#include "lyziar.h"
class lyziariPole
{
private:
	std::vector<lyziar> lyziari;

public:
	std::vector<lyziar>& getlyziari();

	void vypisprvekolo();
	void vypisdruhekolo();
	void sucet();
};

