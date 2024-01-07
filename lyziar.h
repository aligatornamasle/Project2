#pragma once
#include <string>
#include <vector>
class lyziar
{
private:
	std::string meno;
	std::string priezvisko;
	int pretek1;
	int pretek2;
	int sucet;
public:
	lyziar(std::string meno, std::string priezvisko);
	void setMeno();
	void setPriezvisko();
	std::string getMeno();
	std::string getPriezvisko();
	void randomujpreteky();
	int getpretek1();
	int getpretek2();
	int getsucet();
	void setpretek1(int a);
	void setpretek2(int a);
	void getvypis();
	void getvypis1();
	void getvypis2();
	void setsucet(int a);
};

