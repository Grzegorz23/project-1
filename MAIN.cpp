#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
//#include"RASA.h"
#include "POSTAC.h"

using namespace std;

int main()
{
	srand(time(NULL));
	Postac a;
	a.postac();
	

	system("pause");
	return EXIT_SUCCESS;
}