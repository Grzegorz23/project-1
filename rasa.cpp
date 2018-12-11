
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"RASA.h"




string Rasa::rasa()
{

	cout << "Podaj rase" << endl;
	cin >> rasa_1;
	if ((rasa_1 != "czlowiek") && (rasa_1 != "elf") && (rasa_1 != "krasnolud") && (rasa_1 != "niziolek"))
	{
		do
		{
			cout << " Bledna rasa. Dostêpne rasy to:" << endl << "czlowiek" << endl << "elf" << endl << "krasnolud" << endl << "niziolek" << endl;
			cin >> rasa_1;
		} while ((rasa_1 != "czlowiek") && (rasa_1 != "elf") && (rasa_1 != "krasnolud") && (rasa_1 != "niziolek"));
	}

	return rasa_1;
}