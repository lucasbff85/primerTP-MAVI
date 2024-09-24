#include <iostream>
#include <conio.h>
#include "ConsoleManager.h"

void ConsoleManager::mostrarMensaje(string mensaje) {
	cout << mensaje << endl;
}

int ConsoleManager::leerEntero() {
	int numero;
	cin >> numero;
	return numero;
}

float ConsoleManager::leerFlotante() {
	float numero;
	cin >> numero;
	return numero;
}

void ConsoleManager::pausa() {

	cout << "Presione cualquier tecla para continuar..." << endl;
	cin.get();
}