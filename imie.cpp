#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
#include"IMIE.h"

string Imie::imie()
{

	//string comb;
	vector <string> imie_czlowiek_kobieta_1 = { "Abbie","Abighild","Abigund","Abigunda",
		"Ada","Adel","Adelind","Adeline","Adelyn","Adelle",
		"Agathe","Agnete",
		"Aldreda","Alfreda","Alicia","Allane","Althea",
		"Amalie","Amalinde","Amalyn",
		"Anhilida","Annabella","Anna","Anthea",
		"Arabella",
		"Avera",
		"Bechilda","Bella","Bellane","Benedicta","Berlinda","Betlyn","Bertha","Berthilda","Bess","Beth",
		"Broncea","Brunhilda",
		"Camilla","Carla","Carlinda","Carlotta",
		"Cilicia","Cilie",
		"Clora","Clothilda",
		"Connie","Constance","Constanza","Cordelia",
		"Dema","Demona","Desdemona",
		"Dorthilda",
		"Drachena","Drachilda",
		"Edhilda","Edith","Edyth","Edythe",
		"Eleanor","Elinor","Elisinda","Elsina","Ella","Ellene","Ellinde","Eloise","Elsa","Elsbeth","Elspeth","Elyn",
		"Emagunda","Emelia","Emme","Emmalyn","Emmanuel","Emerlinde","Emerlyn",
		"Erica","Ermina","Erminlind","Ermintrude",
		"Esmaralda","Estelle",
		"Etheldreda","Ethelinda","Ethelind","Ethelreda",
		"Fay",
		"Fried","Friedhilda","Friedrun","Fredrica",
		"Gabby","Gabriele","Galina",
		"Gena","Genevieve","Genoveva","Gerberga","Gerda","Gerlinde","Gertie","Gertrud",
		"Greta","Gretchen","Grizelda","Grunhilda",
		"Gudrun","Gudryn",
		"Hnna",
		"Hedwig","Heidi","Heidrun","Helga","Herlinde","Herwig",
		"Hilda","Hildegart","Hildegund",
		"Honoria",
		"Ida",
		"Ingrid","Ingrun","Ingrund",
		"Irmellda","Irmine",
		"Isabella","Isadora","Isolde",
		"Jocelin","Johanna","Josie",
		"Karin","Katarine","Katheryn","Katharina","Katerine","Keterlind","Keterlyn",
		"Kitty",
		"Kristen","Kristena","Kristyn",
		"Kirsten","Kirstyn",
		"Lavina","Lavinia,",
		"Lenora","Leanora","Leticia","Letty","Lena","Lenora",
		"Lisa","Lisbeth","Lizzie",
		"Lorinda","Lornda",
		"Lucinda","Lucretia","Lucie","Ludmilla",
		"Mabel","Madge","Magdalyn","Maggie","Maghilda","Maglind","Maglyn","Magunda","Magreta","Maida","Marien","Marietta","Margaret","Marget","Margreta","Marline","Marlyn","Mathilda","Maude","May",
		"Meg","Melicent",
		"Miranda",
		"Moll",
		"Nathilda","Nellie","Nora","Olga","Ophelia","Osterhild","Ostelle","Ostia","Ottagunda","Ottaline","Ottilda","Ottilyn","Perdita","Pergale","Perginda","Petronella","Philomelia","Reikhilda","Renata","Rosabel","Rosabella","Rosale","Rosalia","Rosalin","Rosalinde","Rosamunde","Rosanne","Rose","Roz","Rozhilda","Salina","Saltza","Sigismunda","Sigrid","Sigunda","Solla","Styrine","Talima","Theodora","Therese","Tilea","Ursula","Ulrica","Valeria","Verena","Wilfreda","Wilhelmina","Winifred","Wolfhilde","Zemelda","Zena" };;
	vector <string> imie_czlowiek_mezczyzna_1 = { "Abelhard","Abelhelm","Admund","Adred","Adric","Agis","Alatic","Alberic","Albrecht","Aldebrand","Alderd","Aldric","Alfreid","Altmar","Alric","Andre","Andred","Andric","Anshelm","Anton","Arne","Arnulf","Axel","Axlebrand","Baldred","Baldric","Baldwin","Balthasam","Barnabas","Bart","Bartolf","Bartomar","Bernolt","Bertold","Bertolf","Boris","Bruno","Burgolf","Calvin","Casimir","Caspar","Cedred","Condrad","Corwin","Dagmar","Dankmar","Dankred","Dekmar","Detlef","Diebold","Diel","Dietfried","Dieter","dietmar","Dietmund","Dietrich","Dirk","Donat","Durnhelm","Eber","Eckel","Eckhart","Edgar","Edmund","Edwin","Ehrhart","Ehrl","Ehrwig","Eldred","Elmeric","Emil","Engel","Engelbert","Engelbrecht","Engelhart","Eodred","Eomund","Erdman","Erdred","Erkenbrand","Erasmus","Erich","Erman","Ernst","Erwin","Eugen","Eustasius","Ewald","Fabian","Faustus","Felix","Ferdinand","Fleugweiner","Fosten","Franz","frediger","fredric","Frebalt","Fredtich","Fulko","Gawin","Gerber","Gerhart","Gerlach","Gernar","Gerolf","Gilbrecht","Gisbert","Giselbrecht","Gismar","Goran","Gosbert","Goswin","Gotfried","Gothard","Gottolf","Gotwin","Gregor","Graimold","Grimwold","Griswold","Guidom","Gundolf","Gundred","Gunnar","Gunter","Gunther","Gustaf","Hadred","Hadwin","Hagar","Hagen","Haldred","Halman","Hamlyn","Hans","Halbrand","Hartmann","Harman","Haug","Heidric","Heimar","Heinfried","Heinman","Heinrich","Heinz","Helmut","Henlyn","Hermann","Herwin","Hieronymus","Hildebart","Hildebrand","hildemar","Hildemund","Hildbred","Hidric","Horst","Hugo","Igor","Ingwald","Jander","Jekil","Jodokus","Johann","Jonas","Jorg","Jorn","Josef","Jost","Jurgen","Karl","Kaspar","Klaus","Kleber","Konrad","Konradin","Kurt","Lamprecht","Lanfried","Lanric","Lanwin","Leo","leopold","Lewin","Liebert","Liebrecht","Liebwin","Lienhart","Linus","Lodwig","Lothar","Lucius","Ludwig","Luitpold","Lukas","Lupold","Lupus","Luther","Lutolf","Madred","MAgnus","Mandred","Manfred","Mathias","Max","Maximillian","Meiner","Meinhart","Meinolf","Mekel","Merkel","Nat","Nathandar","Nicodemus","Odamar","Odric","Odwin","Olbrecht","Oldred","Oldric","Ortlieb","Ortolf","Orwin","Oswald","Osric","Oswin","Otfried","Otto","Otwin","Paulus","Prospero","Ragen","Ralf","Rambrecht","Randulf","Ranulf","Ranald","Reikhard","Rein","Reiner","Reinhard","Reinolt","Reuban","Rigo","Roderic","Rolf","Ruben","Rudel","Rudgar","Rudolf","Rufus","Ruprecht","Sebasitan","Semund","Sepp","Siger","Siegfried","Siegmund","Sigismund","Sigric","Steffan","Tankred","Theoderic","Tilmann","Tomas","Trubald","Trubert","Udo","Ulli","Elfred","Ulfman","Ulman","Uto","Valdred","Valdric","Varl","Viggo","Viktor","Vilmar","Volker","Volkhard","Volkrad","Volkin","Voltz","Walbrecht","Waldor","Waldred","Walther","Warmund","Werner","Wilbert","Wilfried","Wilhelm","Woldred","Wolfram","Wolfhart","Wolfgang","Wulf","Xavier" };
	vector <string> imie_elf_1 = { "Aed","Ael","Aelf","Aen","Aeth","Alth","An","And","Ar","Arg","Ast","Ath","Av","Ban","Bel","Beth","Cad","Cael","Caem","Caeth","Cal","Cam","Cel","Cirt","El","Eld","Elt","En","End","Er","Ers","Fand","Fer","Ferg","Fim","Fin","Gal","Gald","Gaen","Gaes","Ged","Gen","Ges","Geth","Glor","Has","Hath","Hel","Heth","Hilth","Ill","Ind","Ist","Ith","Iy","Kor","Ky","Kyr","La","Lan","Lil","Lim","Lith","Loth","Mal","Mar","Mas","Math","Me","Mes","Meth","Men","Mor","Mort","Nal","Nar","Nen","Nor","Norl","Ri","Riabb","Riann","Rid","Riell","Rien","Ruth","Ryn","Tab","Tal","Tan","Tar","Teth","Tel","Tor","Ty","Ul","Um","Ur","Yr","Yv" };
	vector <string> imie_elf_lacznik = { "A","Al","An","Ar","As","E","El","En","Er","Es","Fan","Fin","I","Il","In","Ir","Is","O","Ol","On","Or","Os","Ra","Ral","Ran","Re","Rel","Ren","Ri","Ril","Rin","Ro","Rol","Ron","Ry","Sa","Sal","San","Se","Sel","Sen","Si","Sil","Sin","So","Sol","Son","U","Ul" };
	vector <string> imie_elf_kobieta_2 = { "A","Aine","Am","Ann","Arma","Arna","Arth","Ath","Beann","Bet","Beth","Brim","Brys","Deann","Det","Deth","Dys","Drian","Driel","Drys","Eann","Eanna","Earna","Earth","Elle","Eth","Eys","eyth","Felle","Fionn","Flys","Fyll","Fynn","Fyr","Feys","I","Ille","Ina","Ira","Isa","Ithi","Itt","La","Lam","Lana","Larna","Lath","Leann","Leath","Lel","Lelle","Leth","Let","Lielle","Lieth","Leann","Nelle","Nem","Neth","Ni","Niell","Niella","Nith","Ras","Reann","Rell","Relle","Rielle","Ris","Rith","Rys","Sar","Sath","Ser","Seth","Sir","Sith","Sor","Soeth","Shar","Sher","Shir","Sys","Tar","Teal","Teann","Ter","Thea","Ther","Thi","Thryn","Thyn","Tir","Tor","Tos","Trean","Tys","Yll","Yrs","Ys" };
	vector <string> imie_elf_mezczyzna_2 = { "Baem","Naine","Baire","Bar","Byhir","Brier","Brior","Brin","Daen","Daine","daire","Dar","Dhil","Dhir","Grel","Drir","Dror","Eorl","Eos","Eoth","Fil","Fin","Fir","Hil","Hin","Hir","Hor","Il","In","Ion","Ir","Is","Ith","Lael","Laen","Laer","Laine","Laire","Lan","Las","Len","Les","Lil","Lin","Lior","Lis","Lor","Los","Mael","Maen","Mair","Main","Mal","Mar","Mil","Min","Mir","Nael","Naen","Ner","Nail","Nair","Nal","Nan","Nar","Neal","Nean","Near","Nil","Nin","Nir","Nis","Ran","Rea","Rel","Ril","Riol","Rion","Rior","Riorl","Riorn","Rir","ryl","Taen","Tair","Tain","Than","Thar","Thel","Thil","Thir","Thin","Thril","Thrin","Thwe","Til","Tin","Tis","We","Yan" };
	vector <string> imie_krasnolud_1 = { "Al","Ath","Athran","Bal","Bala","Bara","Bel","Bela","Ber","Bok","Bor","Bur","Da","Dam","Dora","Drok","Drong","Dur","Dwal","El","Ela","Elan","Elda","Fa","Far","Fara","Fim","Fima","Firen","Fur","Fura","Ga","Gim","Gol","Gollen","Got","Gota","Grim","Gro","Grun","Hak","Haka","Har","Hega","Hur","Kad","Kar","Kata","Kaz","Kaza","Krag","Logaz","Lok","Lun","Mo","Mola","Mor","Mora","No","Nola","Nor","Noran","Nun","Oda","Oka","Olla","Olf","Oth","Othra","Ro","Ror","Roran","Ska","Skalla","Skalf","Skar","Skor","Skora","Snor","Sora","Sven","Thar","Thor","Thora","Thron","Thrun","Thura","Un","Utha","Ulla","Vala","Var","Vara","Zak","Zaka","Zakan","Zar","Zara","Zam","Zama" };
	vector <string> imie_krasnolud_kobieta_2 = { "Bina","Bora","Dila","Dina","Dotina","Dora","Drinella","Fina","Fya","Gana","Gara","Gella","Gina","Groma","Grondella","Grotha","Gruma","Grunda","Gruntina","Gona","Gora","Grimella","Grina","Gromina","Gula","Gunella","Gundina","Kina","Kragella","Krina","Kya","Lina","Likina","Loka","Luna","Mina","Mira","Nina","Nira","Nya","Ragina","Riga","Rika","Rina","Runa","Runella","Skina","Skinella","Tina","Toka","trekella","Trekina","Troka","Zina","Zora" };
	vector <string> imie_krasnolud_mezczyzna_2 = { "Bin","Bor","Dil","Din","Dok","Dor","Drin","Fin","Gan","Gar","Gil","Gin","Gni","Grom","Grond","Groth","Grum","Grund","Grunt","Gon","Gor","Grin","Grim","Gul","Gun","Gund","Ki","Kin","Krak","Kri","Krin","Li","Lin","Lik","Lok","Lun","Min","Mir","Nin","Nir","Rag","Ri","Rig","Rik","Rin","Run","Skin","Tim","Tok","Trek","Trok","Zin","Zor" };
	vector <string> imie_niziolek_1 = { "Bag","Balf","Berc","Bill","Bobb","Bodg","Bog","Bom","Bonn","Brog","Bulc","Bull","Bust","Cam","Cap","Ced","Chund","Clog","Clof","Cob","Cog","Crum","Crump","Curl","Dod","Dog","Dott","Dram","Drub","Drog","Dron","Durc","Elm","Enn","Ermin","Ethan","Falc","Fald","Falm","Far","Fild","Flac","Fogg","Frit","Ful","Func","Gaff","Galb","Gamm","Gert","Giff","Gild","Gon","Grop","Gudd","Gump","Ham","Hal","Hart","Harp","Jac","Jas","Jasp","Joc","Lac","Lil","Lob","Lott","Lud","Lurc","Mad","Mag","Man","May","Mer","Mul","Murc","Murd","Nag","Nell","Nobb","Od","Og","Old","Pipp","Podd","Porc","Riff","Rip","Rob","Sam","Supp","Taff","Talb","Talc","Tay","Tom","Wald","Watt","Will" };
	vector <string> imie_niziolek_kobieta_2 = { "A","Adell","Alot","Apple","Bell","Berr","Eena","Ella","Era","Et","Ia","Flower","Lotta","Petal","Riella","Sweet","Trude","Rose","Willow","Y" };
	vector <string> imie_niziolek_mezczyzna_2 = { "Belly","Er","Fast","In","It","Mutch","O","Odoc","Riadoc","Regar","Wick","Wise","Wit","Y" };
	//imie_czlowiek_kobieta_1 = 
	if (plec_1 == "kobieta")
	{
		if (rasa_1 == "czlowiek")
		{
			jeden = losuj_imie()[0];
			comb = imie_czlowiek_kobieta_1[jeden];
			return comb;
		}
		else if (rasa_1 == "elf")
		{
			jeden = losuj_imie()[0];
			dwa = losuj_imie()[1];
			trzy = losuj_imie()[2];
			comb = imie_elf_1[jeden] + imie_elf_lacznik[dwa] + imie_elf_kobieta_2[trzy];
			return comb;
		}
		else if (rasa_1 == "krasnolud")
		{
			jeden = losuj_imie()[0];
			dwa = losuj_imie()[1];
			comb = imie_krasnolud_1[jeden] + imie_krasnolud_kobieta_2[dwa];
			return comb;
		}
		else if (rasa_1 == "niziolek")
		{
			jeden = losuj_imie()[0];
			dwa = losuj_imie()[1];
			comb = imie_niziolek_1[jeden] + imie_niziolek_kobieta_2[dwa];
			return comb;

		}
	}
	else if (plec_1 == "mezczyzna")
	{
		if (rasa_1 == "czlowiek")
		{
			jeden = losuj_imie()[0];
			comb = imie_czlowiek_mezczyzna_1[jeden];
			return comb;
		}
		else if (rasa_1 == "elf")
		{
			jeden = losuj_imie()[0];
			dwa = losuj_imie()[1];
			trzy = losuj_imie()[2];
			comb = imie_elf_1[jeden] + imie_elf_lacznik[dwa] + imie_elf_mezczyzna_2[dwa];
			return comb;
		}
		else if (rasa_1 == "krasnolud")
		{
			jeden = losuj_imie()[0];
			dwa = losuj_imie()[1];
			comb = imie_krasnolud_1[jeden] + imie_krasnolud_mezczyzna_2[dwa];
			return comb;
		}
		else if (rasa_1 == "niziolek")
		{
			jeden = losuj_imie()[0];
			dwa = losuj_imie()[1];
			comb = imie_niziolek_1[jeden] + imie_niziolek_mezczyzna_2[dwa];
			return comb;

		}
	}

}