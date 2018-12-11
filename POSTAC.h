#pragma once

#ifndef POSTAC
#define POSTAC

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

//#include "PLEC.h"
//#include "RASA.h"
//#include "PROFESJA.h"
//#include "CECHY.h"
#include "IMIE.h"
#include "BAZA.h"

using namespace std;

class Postac : public Imie
{
	
public:
	
	Baza t[50];

	void postac();
};


#endif // !1
