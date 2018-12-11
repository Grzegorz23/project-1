#pragma once

#ifndef PLEC
#define PLEC

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"RASA.h"

using namespace std;

class Plec
{
	string plec_1;
	string plec();

	//friend Imie;
	friend  class Imie;
	friend class Postac;
};

#endif