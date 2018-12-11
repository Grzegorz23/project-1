#pragma once

#ifndef RASA
#define RASA

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

using namespace std;

class Rasa
{

	string rasa_1;
	string rasa();

	//friend Imie;
	friend class Imie;
	friend class Cechy;
	friend class Profesja;
	friend class Postac;
};



#endif