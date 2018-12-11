#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"PROFESJA.h"



string Profesja::profesja()
{
	vector <string> profesja = { "Akolita"
		,"Banita"
		,"Berserker z Norski"
		,"Chlop"
		,"Ciura obozowa"
		,"Cyrkowiec"
		,"Cyrulik"
		,"Fanatyk"
		,"Flisak"
		,"Giermek"
		,"Gladiator"
		,"Goniec"
		,"Gornik"
		,"Guslarz"
		,"Hiena cmentarna"
		,"Kanciarz"
		,"Kozak kislevski"
		,"Lesnik"
		,"Lowca"
		,"Lowca nagród"
		,"Mieszczanin"
		,"Mytnik"
		,"Najemnik"
		,"Ochotnik"
		,"Ochroniarz"
		,"Oprych"
		,"Paz"
		,"Podzegacz"
		,"Porywacz zwlok"
		,"Poslaniec"
		,"Przemytnik"
		,"Przepatrywacz"
		,"Przewoznik"
		,"Rybak"
		,"Rzecznik rodu"
		,"Rzemieslnik"
		,"Rzezimieszek"
		,"Skryba"
		,"S³uga"
		,"Stra¿nik"
		,"Straznik drog"
		,"Straznik pol"
		,"Straznik wiezienny"
		,"Szczurolap"
		,"Szermierz estalijski"
		,"Szlachcic"
		,"Smieciarz"
		,"Tarczownik"
		,"Uczeñ czarodzieja"
		,"Wêglarz"
		,"Wloczykij"
		,"Wojownik klanowy"
		,"Woznica"
		,"Zabojca trolli"
		,"Zarzadca"
		,"Zlodziej"
		,"Zak"
		,"Zeglarz"
		,"Zolnierz"
		,"Zolnierz okretowy"
	};
	string a=" ", x;
	int b = 0;
	cout << "Czy chcesz wylosowac profesje: t::n ?" << endl;
	cin >> x;
	if ((x == "n")||(x=="N"))
	{
		do
		{
			cout << "Wpisz profesje: " << endl;
			cin >> a;

			for (int i = 0; i < 60; i++)
			{
				if (profesja[i] == a)
				{
					//b++;
				//	if (b == 1)
					//{
						profesja_1 = a;
						//return profesja_1;
					//}
					

				}
				else if (i == 59)
					cout << "Bledna profesja" << endl;
			}
			//else
			//cout << "Bledna profesja" << endl;



		} while (b != 1);

	}

	else
		/*{

		if (rasa_1 == "elf")
		{
		switch ((rand() % 17) + 1)
		{
		case 1:
		profesja_1 = profesja[1];

		case 2:
		profesja_1 = profesja[5];

		case 3:
		profesja_1 = profesja[15];

		case 4:
		profesja_1 = profesja[18];

		case 5:
		profesja_1 = profesja[22];

		case 6:
		profesja_1 = profesja[26];

		case 7:
		profesja_1 = profesja[29];

		case 8:
		profesja_1 = profesja[33];

		case 9:
		profesja_1 = profesja[34];

		case 10:
		profesja_1 = profesja[35];

		case 11:
		profesja_1 = profesja[37];

		case 12:
		profesja_1 = profesja[48];

		case 13:
		profesja_1 = profesja[50];

		case 14:
		profesja_1 = profesja[51];

		case 15:
		profesja_1 = profesja[55];

		case 16:
		profesja_1 = profesja[56];

		case 17:
		profesja_1 = profesja[57];
		}
		return profesja_1;

		}
		if (rasa_1 == "krasnolud")
		{
		switch ((rand() % 30) + 1)
		{
		case 1:
		profesja_1 = profesja[1];
		break;
		case 2:
		profesja_1 = profesja[5];
		break;
		case 3:
		profesja_1 = profesja[10];
		break;
		case 4:
		profesja_1 = profesja[11];
		break;
		case 5:
		profesja_1 = profesja[12];
		break;
		case 6:
		profesja_1 = profesja[14];
		break;
		case 7:
		profesja_1 = profesja[18];
		break;
		case 8:
		profesja_1 = profesja[20];
		break;
		case 9:
		profesja_1 = profesja[21];
		break;
		case 10:
		profesja_1 = profesja[22];
		break;
		case 11:
		profesja_1 = profesja[23];
		break;
		case 12:
		profesja_1 = profesja[24];
		break;
		case 13:
		profesja_1 = profesja[27];
		break;
		case 14:
		profesja_1 = profesja[30];
		break;
		case 15:
		profesja_1 = profesja[35];
		break;
		case 16:
		profesja_1 = profesja[36];
		break;
		case 17:
		profesja_1 = profesja[37];
		break;
		case 18:
		profesja_1 = profesja[38];
		break;
		case 19:
		profesja_1 = profesja[39];
		break;
		case 20:
		profesja_1 = profesja[42];
		break;
		case 21:
		profesja_1 = profesja[43];
		break;
		case 22:
		profesja_1 = profesja[45];
		break;
		case 23:
		profesja_1 = profesja[47];
		break;
		case 24:
		profesja_1 = profesja[52];
		break;
		case 25:
		profesja_1 = profesja[53];
		break;
		case 26:
		profesja_1 = profesja[55];
		break;
		case 27:
		profesja_1 = profesja[56];
		break;
		case 28:
		profesja_1 = profesja[57];
		break;
		case 29:
		profesja_1 = profesja[58];
		break;
		case 30:
		profesja_1 = profesja[59];
		break;
		}
		return profesja_1;
		}
		if (rasa_1 == "niziolek")
		{
		switch ((rand() % 31) + 1)
		{
		case 1:
		profesja_1 = profesja[1];
		//break;
		case 2:
		profesja_1 = profesja[4];
		//break;
		case 3:
		profesja_1 = profesja[5];
		//break;
		case 4:
		profesja_1 = profesja[6];
		//break;
		case 5:
		profesja_1 = profesja[14];
		//break;
		case 6:
		profesja_1 = profesja[15];
		//break;
		case 7:
		profesja_1 = profesja[18];
		//break;
		case 8:
		profesja_1 = profesja[19];
		//break;
		case 9:
		profesja_1 = profesja[20];
		//break;
		case 10:
		profesja_1 = profesja[21];
		//break;
		case 11:
		profesja_1 = profesja[22];

		case 12:
		profesja_1 = profesja[23];

		case 13:
		profesja_1 = profesja[26];
		//break;
		case 14:
		profesja_1 = profesja[27];
		//break;
		case 15:
		profesja_1 = profesja[28];
		//break;
		case 16:
		profesja_1 = profesja[29];
		//break;
		case 17:
		profesja_1 = profesja[30];
		//break;
		case 18:
		profesja_1 = profesja[32];
		//break;
		case 19:
		profesja_1 = profesja[33];
		//break;
		case 20:
		profesja_1 = profesja[35];
		//break;
		case 21:
		profesja_1 = profesja[38];
		//break;
		case 22:
		profesja_1 = profesja[39];
		//break;
		case 23:
		profesja_1 = profesja[40];
		//break;
		case 24:
		profesja_1 = profesja[41];
		//break;
		case 25:
		profesja_1 = profesja[43];
		//break;
		case 26:
		profesja_1 = profesja[46];
		//break;
		case 27:
		profesja_1 = profesja[49];
		//break;
		case 28:
		profesja_1 = profesja[50];
		//break;
		case 29:
		profesja_1 = profesja[55];
		//break;
		case 30:
		profesja_1 = profesja[56];
		//break;
		case 31:
		profesja_1 = profesja[58];
		//break;

		}*/
	{
		if (rasa_1 == "czlowiek")
		{
			//int los = (rand() % 54) + 1;
			//for (int i = 0; i < 54;i++)
			while (a == " ")
			{
				int los = (rand() % 58) + 1;
				//int d;
				for (int i = 0; i <= 58; i++) {
					if (los == i)
						if (los == 11||los==34||los==41||los==47||los==51||los==53)
							continue;
						else
						{
							a = profesja[i];
							break;
						}

				}
			}
		}
			
			/*if (los == 1)
				a = profesja[0];
			if (los == 2)
				a = profesja[1];
			if (los == 3)
				a = profesja[2];
			if (los == 4)
				a = profesja[3];
			if (los == 5)
				a = profesja[4];
			if (los == 6)
				a = profesja[5];
			if (los == 7)
				a = profesja[6];
			if (los == 8)
				a = profesja[7];
			if (los == 9)
				a = profesja[8];
			if (los == 10)
				a = profesja[9];
			if (los == 11)
				a = profesja[10];

			if (los == 12)
				a = profesja[12];
			if (los == 13)
				a = profesja[13];
			if (los == 14)
				a = profesja[14];
			if (los == 15)
				a = profesja[15];
			if (los == 16)
				a = profesja[16];
			if (los == 17)
				a = profesja[17];
			if (los == 18)
				a = profesja[18];
			if (los == 19)
				a = profesja[19];
			if (los == 20)
				a = profesja[20];
			if (los == 21)
				a = profesja[21];
			if (los == 22)
				a = profesja[22];
			if (los == 23)
				a = profesja[23];
			if (los == 24)
				a = profesja[24];
			if (los == 25)
				a = profesja[25];
			if (los == 26)
				a = profesja[26];
			if (los == 27)
				a = profesja[27];
			if (los == 28)
				a = profesja[28];
			if (los == 29)
				a = profesja[29];
			if (los == 30)
				a = profesja[30];
			if (los == 31)
				a = profesja[31];
			if (los == 32)
				a = profesja[32];
			if (los == 33)
				a = profesja[33];

			if (los == 34)
				a = profesja[35];
			if (los == 35)
				a = profesja[36];
			if (los == 36)
				a = profesja[37];
			if (los == 37)
				a = profesja[38];
			if (los == 38)
				a = profesja[39];
			if (los == 39)
				a = profesja[40];

			if (los == 40)
				a = profesja[42];
			if (los == 41)
				a = profesja[43];
			if (los == 42)
				a = profesja[44];
			if (los == 43)
				a = profesja[45];
			if (los == 44)
				a = profesja[46];

			if (los == 45)
				a = profesja[48];
			if (los == 46)
				a = profesja[49];
			if (los == 47)
				a = profesja[50];

			if (los == 48)
				a = profesja[52];

			if (los == 49)
				a = profesja[54];
			if (los == 50)
				a = profesja[55];
			if (los == 51)
				a = profesja[56];
			if (los == 52)
				a = profesja[57];
			if (los == 53)
				a = profesja[58];
			if (los == 54)
				a = profesja[59];
		}*/
		else if (rasa_1 == "elf")
		{

			int los = (rand() % 17) + 1;

			if (los == 1)
			{
				a = profesja[1];
			}
			if (los == 2)
			{
				a = profesja[5];
			}
			if (los == 3)
			{
				a = profesja[15];
			}
			if (los == 4)
			{
				a = profesja[18];
			}
			if (los == 5)
			{
				a = profesja[22];
			}
			if (los == 6)
			{
				a = profesja[26];
			}
			if (los == 7)
			{
				a = profesja[29];
			}
			if (los == 8)
			{
				a = profesja[33];
			}
			if (los == 9)
			{
				a = profesja[34];
			}
			if (los == 10)
			{
				a = profesja[35];
			}
			if (los == 11)
			{
				a = profesja[37];
			}
			if (los == 12)
			{
				a = profesja[48];
			}
			if (los == 13)
			{
				a = profesja[50];
			}
			if (los == 14)
			{
				a = profesja[51];
			}
			if (los == 15)
			{
				a = profesja[55];
			}
			if (los == 16)
			{
				a = profesja[56];
			}
			if (los == 17)
			{
				a = profesja[57];
			}
		}
		else if (rasa_1 == "krasnolud")
		{
			int los = (rand() % 30) + 1;
			if (los == 1)
			{
				a = profesja[1];
			}
			if (los == 2)
			{
				a = profesja[5];
			}
			if (los == 3)
			{
				a = profesja[10];
			}
			if (los == 4)
			{
				a = profesja[11];
			}
			if (los == 5)
			{
				a = profesja[12];
			}
			if (los == 6)
			{
				a = profesja[14];
			}
			if (los == 7)
			{
				a = profesja[18];
			}
			if (los == 8)
			{
				a = profesja[20];
			}
			if (los == 9)
			{
				a = profesja[21];
			}
			if (los == 10)
			{
				a = profesja[22];
			}
			if (los == 11)
			{
				a = profesja[23];
			}
			if (los == 12)
			{
				a = profesja[24];
			}
			if (los == 13)
			{
				a = profesja[27];
			}
			if (los == 14)
			{
				a = profesja[30];
			}
			if (los == 15)
			{
				a = profesja[35];
			}
			if (los == 16)
			{
				a = profesja[36];
			}
			if (los == 17)
			{
				a = profesja[37];
			}
			if (los == 18)
			{
				a = profesja[38];
			}
			if (los == 19)
			{
				a = profesja[39];
			}
			if (los == 20)
			{
				a = profesja[42];
			}
			if (los == 21)
			{
				a = profesja[43];
			}
			if (los == 22)
			{
				a = profesja[45];
			}
			if (los == 23)
			{
				a = profesja[47];
			}
			if (los == 24)
			{
				a = profesja[52];
			}
			if (los == 25)
			{
				a = profesja[53];
			}
			if (los == 26)
			{
				a = profesja[55];
			}
			if (los == 27)
			{
				a = profesja[56];
			}
			if (los == 28)
			{
				a = profesja[57];
			}
			if (los == 29)
			{
				a = profesja[58];
			}
			if (los == 30)
			{
				a = profesja[59];
			}
		}
		else if (rasa_1 == "niziolek")
		{
			int los = (rand() % 31) + 1;
			if (los == 1)
			{
				a = profesja[1];
			}
			else if (los == 2)
			{
				a = profesja[4];
			}
			else if (los == 3)
			{
				a = profesja[5];
			}
			else if (los == 4)
			{
				a = profesja[6];
			}
			else if (los == 5)
			{
				a = profesja[14];
			}
			else if (los == 6)
			{
				a = profesja[15];
			}
			else if (los == 7)
			{
				a = profesja[18];
			}
			else if (los == 8)
			{
				a = profesja[19];
			}
			else if (los == 9)
			{
				a = profesja[20];
			}
			else if (los == 10)
			{
				a = profesja[21];
			}
			else if (los == 11)
			{
				a = profesja[22];
			}
			else if (los == 12)
			{
				a = profesja[23];
			}
			else if (los == 13)
			{
				a = profesja[26];
			}
			else if (los == 14)
			{
				a = profesja[27];
			}
			else if (los == 15)
			{
				a = profesja[28];
			}
			else if (los == 16)
			{
				a = profesja[29];
			}
			else if (los == 17)
			{
				a = profesja[30];
			}
			else if (los == 18)
			{
				a = profesja[32];
			}
			else if (los == 19)
			{
				a = profesja[33];
			}
			else if (los == 20)
			{
				a = profesja[35];
			}
			else if (los == 21)
			{
				a = profesja[38];
			}
			else if (los == 22)
			{
				a = profesja[39];
			}
			else if (los == 23)
			{
				a = profesja[40];
			}
			else if (los == 24)
			{
				a = profesja[41];
			}
			else if (los == 25)
			{
				a = profesja[43];
			}
			else if (los == 26)
			{
				a = profesja[46];
			}
			else if (los == 27)
			{
				a = profesja[49];
			}
			else if (los == 28)
			{
				a = profesja[50];
			}
			else if (los == 29)
			{
				a = profesja[55];
			}
			else if (los == 30)
			{
				a = profesja[56];
			}
			else if (los == 31)
			{
				a = profesja[58];
			}
		}
		profesja_1 = a;
		return profesja_1;
	}
	return profesja_1;
}