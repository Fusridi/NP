#include "help.h"
#include <iostream>
using namespace std;
int Help()
{
	cout << "usage: NP [[-h] | [-c <chemin d'enregistrement>]]" << endl;
	cout << "  " << "-h" << "         " << "Affiche l'aide sur le logiciel" << endl;
	cout << "  " << "-c" << "         " << "Ecrit dans le fichier specifie les nombre premier calcule." << endl;
	return 0;
}