#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "help.h"
#include "calculerNombrePremier.h"
using namespace std;
int main(int argc, char *argv[])
{
	if (argv[1])
	{
		string argument1(argv[1]);
		if (argument1 == "-h" || argument1 == "/?" || argument1 == "-?" || argument1 == "/h")
		{
			Help();
		}
		else if (argument1 == "-c" || argument1 == "/c")
		{
			if (argv[2])
			{
				string argument2(argv[2]);
				calculerNombrePremier(argument2);
			}
			else
			{
				cout << "Syntaxe incorrecte, utilisez l'argument \"-h\" pour afficher l'aide." << endl;
			}
		}
		else
		{
			cout << "Syntaxe incorrecte, utilisez l'argument \"-h\" pour afficher l'aide." << endl;
		}
	}
	else
	{
		cout << "Syntaxe incorrecte, utilisez l'argument \"-h\" pour afficher l'aide." << endl;
	}

	return 0;
}