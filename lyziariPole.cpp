#include "lyziariPole.h"
#include <algorithm>
#include <iostream>

std::vector<lyziar>& lyziariPole::getlyziari()
{
	return lyziari;
}

void lyziariPole::vypisprvekolo()
{
	std::cout << "Prve kolo" << std::endl;
	std::vector<int> values;
	for (int a = 0; a < lyziari.size(); a++) {
		values.push_back(lyziari[a].getpretek1());
		


	}
	sort(values.begin(), values.end());
	int pomocna;
	for (int c = 0; c < values.size(); c++) {
		int pomocna = values[c];
			for (int g = 0; g < lyziari.size(); g++) {
				
				if (pomocna == lyziari[g].getpretek1()) {
					lyziari[g].getvypis();
					lyziari[g].setpretek1(2);
				}
			}

	}
}

void lyziariPole::vypisdruhekolo()
{
std::cout << "Druhe kolo" << std::endl;
	std::vector<int> values1;
	for (int a = 0; a < lyziari.size(); a++) {
		values1.push_back(lyziari[a].getpretek2());



	}
	sort(values1.begin(), values1.end());
	int pomocna;
	for (int c = 0; c < values1.size(); c++) {
		int pomocna = values1[c];
		for (int g = 0; g < lyziari.size(); g++) {

			if (pomocna == lyziari[g].getpretek2()) {
				lyziari[g].getvypis1();
				lyziari[g].setpretek2(2);
			}
		}

	}
}


void lyziariPole::sucet()
{
	std::cout << "Sucet" << std::endl;
	std::vector<int> values2;
	for (int a = 0; a < lyziari.size(); a++) {
		values2.push_back(lyziari[a].getsucet());
	}
	sort(values2.begin(), values2.end());
	int pomocna;
	for (int c = 0; c < values2.size(); c++) {
		int pomocna = values2[c];
		for (int g = 0; g < lyziari.size(); g++) {

			if (pomocna == lyziari[g].getsucet()) {
				lyziari[g].getvypis2();
				lyziari[g].setsucet(2);
			}
		}

	}
}
