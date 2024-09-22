#include "Heroe.h"
#include <iostream>

Heroe::Heroe() {

	//inicializamos el contador de princesasRescatadas
	for (int i = 0; i < 10; i++) {
		princesasRescatadas[i] = "vacio";
	}
}

void Heroe::cambiarCoordenadas(int x, int y) {
	this->x = x;
	this->y = y;
}

void Heroe::recibirDanio (int puntos){
	salud -= puntos;
}

void Heroe::recibirCura(int puntos) {
	salud += puntos;
}

void Heroe::rescatarPrincesa(string princesa) {
	if (contadorPrincesasRescatadas < 10) {
		for (int i = 0; i < 10; i++) {
			if (princesasRescatadas[i] == "vacio") {
				princesasRescatadas[i] = princesa;
				contadorPrincesasRescatadas++;
				cout << "Has rescatado a la princesa " << princesa << "!" << endl;
				mostrarPrincesasRescatadas();
				return;
			}
		}
	}
	else {
		cout << "Todas las princesas han sido rescatadas!!" << endl;
	}
	
	
	
}

void Heroe::mostrarPrincesasRescatadas() {
	if (contadorPrincesasRescatadas > 0) {
		cout << "Hasta ahora has rescatado a :" << endl;
		for (int i = 0; i < contadorPrincesasRescatadas; i++) {
			cout << princesasRescatadas[i] << endl;
		}
	}
	
}

void Heroe::status() {
	cout << "Salud: " << salud << endl;
	cout << "Princesas rescatadas: " << endl;
	mostrarPrincesasRescatadas();
}