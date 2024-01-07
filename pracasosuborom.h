#pragma once
#include <string>
#include <sstream>
#include <vector>
#include "lyziar.h"
class pracasosuborom
{
public:
	bool nacitanie(std::string nazovsuboru, std::vector<lyziar>& lyziari);
	bool vypisanie(std::string nazovsuboru, std::vector<lyziar>& lyziari);
};

