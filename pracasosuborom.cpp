#include "pracasosuborom.h"
#include <fstream>
#include <iostream>
#include "lyziar.h"
#include "lyziariPole.h"

bool pracasosuborom::nacitanie(std::string nazovsuboru, std::vector<lyziar>& lyziari)
{
	std::ifstream subor(nazovsuboru);
	if (subor.is_open()) {
		std::string line;
		while (std::getline(subor, line)) {
			std::istringstream ss(line);
			std::string meno, priezvisko;
			ss >> meno >> priezvisko;
			lyziar lyziar(meno, priezvisko);
			lyziari.push_back(lyziar);


		}


		subor.close();
		return true;
	}
	else {
		std::cout << "nepodarilo sa otvorit subor" << std::endl;
		return false;
	}


}

bool pracasosuborom::vypisanie(std::string nazovsuboru, std::vector<lyziar>& lyziari)
{
	return false;
}
