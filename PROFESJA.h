#pragma once

#ifndef PROFESJA
#define PROFESJA

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

#include "PLEC.h"
#include "RASA.h"

using namespace std;

class Profesja :public Rasa
{
	string profesja_1;
	string profesja();
	int *tab = new int[9];
	//string profesja_objeralna();
	//friend Losujaca;
	friend Imie;
	friend Postac;
	friend Cechy;

};

#endif