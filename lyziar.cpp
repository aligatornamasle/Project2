#include "lyziar.h"
#include "randomizer.h"
#include <iostream>
lyziar::lyziar(std::string meno, std::string priezvisko)
{
	this->meno = meno;
	this->priezvisko = priezvisko;
	this->randomujpreteky();
}

void lyziar::setMeno()
{
}

void lyziar::setPriezvisko()
{
}

std::string lyziar::getMeno()
{
	return this->meno;
}

std::string lyziar::getPriezvisko()
{
	return this->priezvisko;
}

void lyziar::randomujpreteky()
{
	Randomizer rander;
	this->pretek1 = rander.getRandomCislo();
	this->pretek2 = rander.getRandomCislo();
	this->sucet = pretek1 + pretek2;
	
}

int lyziar::getpretek1()
{
	return this->pretek1;
}

int lyziar::getpretek2()
{
	return this->pretek2;
}

int lyziar::getsucet()
{
	return this->sucet;
}

void lyziar::setpretek1(int a)
{
	pretek1 = a;
}
void lyziar::setpretek2(int a)
{
	pretek2 = a;
}

void lyziar::getvypis()
{
	int p=0;
	int d=0;
	std::cout << meno << " " << priezvisko << " ";
	if (pretek1>= 60) {
		 p = pretek1 / 60;
		d = pretek1 % 60;

	}
	
	std::cout << p << " minut " << d << "sekund" << std::endl;

}
void lyziar::getvypis1()
{
	int h=0;
	int f=0;
	std::cout << meno << " " << priezvisko << " ";
	if (pretek2 >= 60) {
		h = pretek2 / 60;
		f = pretek2 % 60;

	}
	std::cout << h << " minut " << f << "sekund" << std::endl;

}
void lyziar::getvypis2()
{
	int h = 0;
	int f = 0;
	std::cout << meno << " " << priezvisko << " ";
	if (sucet >= 60) {
		h = sucet / 60;
		f = sucet % 60;

	}
	std::cout << h << " minut " << f << "sekund" << std::endl;

}

void lyziar::setsucet(int a)
{
	sucet = a;
}
