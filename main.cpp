
#include <iostream>
#include "lyziariPole.h"
#include "pracasosuborom.h"
int main() {

	lyziariPole lyzz;
	pracasosuborom subornacitanie;
	std::string subor = "lyz.txt";
	subornacitanie.nacitanie(subor, lyzz.getlyziari());
	lyzz.vypisprvekolo();
	lyzz.vypisdruhekolo();
	lyzz.sucet();


	return 0;
}