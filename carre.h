#pragma once

#include <iostream>
class CCarre
{

private :
	
	unsigned int sx;
	unsigned int sy;
	unsigned int cote;

public :

	void Setsx(int sx1);

	void Setsy(int sy1);

	void Setcote(int cote1);

	void Afficher();

	int Getsx();

	int Getsy();

	int GetCote();
};

