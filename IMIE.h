#pragma once

#ifndef IMIE
#define IMIE

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"RASA.h"
#include "CECHY.h"

using namespace std;

class Imie :public Cechy, public Plec
{
	string comb;
	int pierwsza, lacznik, druga;
	int jeden, dwa, trzy;
	string imie();
	int *losuj_imie()
	{

		int *tablica = new int[2];

		if ((rasa_1 == "czlowiek") && (plec_1 == "kobieta"))
		{
			tablica[0] = (rand() % 238) + 1;
			return tablica;
		}
		if ((rasa_1 == "czlowiek") && (plec_1 == "mezczyzna"))
		{
			tablica[0] = (rand() % 300) + 1;
			return tablica;
		}
		if (rasa_1 == "elf")
		{

			tablica[0] = (rand() % 100) + 1;
			tablica[1] = (rand() % 50) + 1;
			if (plec_1 == "kobieta")
			{
				tablica[2] = (rand() % 100) + 1;
				return tablica;
			}
			if (plec_1 == "mezczyzna")
			{
				tablica[2] = (rand() % 100) + 1;
				return tablica;
			}

		}
		if (rasa_1 == "krasnolud")
		{

			tablica[0] = (rand() % 100) + 1;
			if (plec_1 == "kobieta")
			{
				tablica[1] = (rand() % 55) + 1;
				return tablica;
			}
			if (plec_1 == "mezczyzna")
			{
				tablica[1] = (rand() % 54) + 1;
				return tablica;
			}

		}
		if (rasa_1 == "niziolek")
		{

			tablica[0] = (rand() % 100) + 1;

			if (plec_1 == "kobieta")
			{
				tablica[1] = (rand() % 20) + 1;
				return tablica;
			}
			if (plec_1 == "mezczyzna")
			{
				tablica[1] = (rand() % 14) + 1;
				return tablica;
			}

		}

	}

	friend class Postac;

};

#endif