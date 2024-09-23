#pragma once
#include <string>
//#include <conio.h>
using namespace std;


class Heroe {
protected:
	int salud = 500;
	int x = 0, y = 0; //posicion en el mundo
	string princesasRescatadas[10];
	int contadorPrincesasRescatadas = 0;
public:
	Heroe();
	~Heroe();
	void cambiarCoordenadas(int x, int y);
	void recibirDanio(int puntos);
	void recibirCura(int puntos);
	void rescatarPrincesa(string princesa);
	void mostrarPrincesasRescatadas();
	void status();
};

