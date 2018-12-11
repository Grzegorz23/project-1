#pragma once
#ifndef CECHY
#define CECHY

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

#include "PLEC.h"
#include "PROFESJA.h"

using namespace std;

class Cechy :public Profesja
{
	int *cechy() {

		int ZY;

		for (int i = 0; i <= 7; i++) {

			tab[i] = ((rand() % 10) + 1) + ((rand() % 10) + 1);
		}
		tab[8] = 1;
		ZY = ((rand() % 10) + 1);

		if (rasa_1 == "czlowiek")
		{
			for (int i = 0; i <= 7; i++)
			{
				tab[i] += 20;
			}
		
			if ((ZY >= 1) && (ZY <= 3))
				tab[9] = 10;
			else if ((ZY >= 4) && (ZY <= 6))
				tab[9] = 11;
			else if ((ZY >= 7) && (ZY <= 9))
				tab[9] = 12;
			else if (ZY == 10)
				tab[9] = 13;
		}
		if (rasa_1 == "elf")
		{
			tab[0] += 20;
			tab[1] += 30;
			tab[2] += 20;
			tab[3] += 20;
			tab[4] += 30;
			tab[5] += 20;
			tab[6] += 20;
			tab[7] += 20;
			if ((ZY >= 1) && (ZY <= 3))
				tab[9] = 9;
			if ((ZY >= 4) && (ZY <= 6))
				tab[9] = 10;
			if ((ZY >= 7) && (ZY <= 9))
				tab[9] = 11;
			if (ZY == 10)
				tab[9] = 12;
		}
		if (rasa_1 == "krasnolud")
		{
			tab[0] += 30;
			tab[1] += 20;
			tab[2] += 20;
			tab[3] += 30;
			tab[4] += 10;
			tab[5] += 20;
			tab[6] += 20;
			tab[7] += 10;
			if ((ZY >= 1) && (ZY <= 3))
				tab[9] = 11;
			if ((ZY >= 4) && (ZY <= 6))
				tab[9] = 12;
			if ((ZY >= 7) && (ZY <= 9))
				tab[9] = 13;
			if (ZY == 10)
				tab[9] = 14;
		}
		if (rasa_1 == "niziolek")
		{
			tab[0] += 10;
			tab[1] += 30;
			tab[2] += 10;
			tab[3] += 10;
			tab[4] += 30;
			tab[5] += 20;
			tab[6] += 20;
			tab[7] += 30;
			if ((ZY >= 1) && (ZY <= 3))
				tab[9] = 8;
			if ((ZY >= 4) && (ZY <= 6))
				tab[9] = 9;
			if ((ZY >= 7) && (ZY <= 9))
				tab[9] = 10;
			if (ZY == 10)
				tab[9] = 11;
		}

		return tab;
	}
	int szybkosc();
	friend class Imie;
	friend class Postac;
};
#endif // !1