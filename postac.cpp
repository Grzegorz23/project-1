#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"POSTAC.h"
#include "BAZA.h"



void Postac::postac()
{
	string a;
	int i=0;
	
	//Baza postacie[];
	cout << "Chcesz stworzyc postac t::n ?" << endl;
	cin >> a;
	
	
	while ((a == "t")||(a=="T"))
	{
		ofstream plik("C:\\Users\\Grzeh\\Desktop\\RPG Warhammer\\NPC\\NPC.txt");
		rasa();
		plec();
		profesja();
		cechy();
		imie();
		cout << "Rasa: " << rasa_1 << endl;
		t[i].rasa = rasa_1;
		cout << "Plec: " << plec_1 << endl;
		t[i].plec = plec_1;
		cout << "Profesja: " << profesja_1 << endl<<endl;
		t[i].profesja = profesja_1;
		//fstream plik("C:\\Users\\Grzeh\\Desktop\\RPG Warhammer\\NPC\\NPC.txt");
		plik << "Plec: " << plec_1 << endl;
		plik << "Rasa " << rasa_1 << endl;
		plik << "Imie " << comb << endl;
		t[i].imie = comb;
		plik << "Profesja " << profesja_1 << endl;
		plik << "Cechy:" << endl;
		plik << "WW: " << tab[0] << endl;
		plik << "US: " << tab[1] << endl;
		plik << "K: " << tab[2] << endl;
		plik << "Odp: " << tab[3] << endl;
		plik << "Zr: " << tab[4] << endl;
		plik << "Int: " << tab[5] << endl;
		plik << "SW: " << tab[6] << endl;
		plik << "Ogd: " << tab[7] << endl;
		plik << "A: " << tab[8] << endl;
		plik << "Zyw: " << tab[9] << endl;
		plik << "S: " << tab[2] / 10 << endl;
		plik << "Wt: " << tab[3] / 10 << endl;
		plik << "Sz: " << szybkosc() << endl;
		plik << "Mag: 0" << endl;
		plik << "PO: 0" << endl;
		plik << "PP: 0" << endl;
		plik.close();

		i++;
		for (int x = 0; x <= i; x++)
		{
			cout << t[x].rasa << endl;
			cout << t[x].plec << endl;
			cout << t[x].profesja << endl;
			cout << t[x].imie << endl<<endl;
		}
		cout << "Chcesz dodac postac: t::n?" << endl;
		cin >> a;
		plik.close();
	}
	
}