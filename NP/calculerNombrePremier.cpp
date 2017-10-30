#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
#include "calculerNombrePremier.h"
using namespace std;
int calculerNombrePremier(string cheminEnregistrementFichier)
{
	ofstream flux(cheminEnregistrementFichier, ios::app);;
	vector <int> nombrePremier;
	int nombre(5);
	int reste;
	int repere;
	bool peutSortir(false);
	double racine;
	string ligne;
	ifstream recap(cheminEnregistrementFichier);
	if (!flux)
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en ecriture." << endl;
	}
	if (recap)
	{
		recap.seekg(0, ios::end);
		int position;
		position = recap.tellg();
		cout << position << endl;
		recap.seekg(0, ios::beg);
		if (position != 0)
		{
			while (getline(recap, ligne))
			{
				nombrePremier.push_back(atoi(ligne.c_str()));
				cout << atoi(ligne.c_str()) << endl;
			}
			flux << endl;
			nombre = nombrePremier[nombrePremier.size() - 1] + 2;
		}
		else
		{
			flux << "2" << endl;
			cout << "2" << endl;
			nombrePremier.push_back(2);
			flux << "3" << endl;
			cout << "3" << endl;
			nombrePremier.push_back(3);
		}
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
	do
	{
		repere = 0;
		peutSortir = false;
		racine = sqrt(nombre);
		do
		{
			reste = nombre % nombrePremier[repere];
			if (nombrePremier[repere] > racine)
			{
				peutSortir = true;
				cout << nombre << endl;
				flux << nombre << endl;
				nombrePremier.push_back(nombre);
			}
			else if (reste == 0)
			{
				peutSortir = true;
			}
			++repere;
		} while (!peutSortir);
		nombre = nombre + 2;
	} while (flux);
	flux.close();
	return 0;
}