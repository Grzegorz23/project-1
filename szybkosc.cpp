#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"CECHY.h"

int Cechy::szybkosc()
{
	{
		int szybkosc;
		if ((rasa_1 == "czlowiek") || (rasa_1 == "niziolek"))
			szybkosc = 4;
		else if (rasa_1 == "elf")
			szybkosc = 5;
		else if (rasa_1 == "krasnolud")
			szybkosc = 3;
		return szybkosc;
	}

}