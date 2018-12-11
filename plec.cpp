
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"PLEC.h"





string Plec::plec() {

	cout << "Podaj plec " << endl;
	cin >> plec_1;
	if ((plec_1 != "kobieta") && (plec_1 != "mezczyzna"))
	{
		do
		{

			cout << " Bledna plec. Dostêpna plce to:" << endl << "kobieta" << endl << "mezczyzna" << endl;;
			cin >> plec_1;
		} while ((plec_1 != "kobieta") && (plec_1 != "mezczyzna"));
	}

	return plec_1;

}