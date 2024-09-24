#include <iostream>
#include "ConsoleManager.h"

using namespace std;

int main(int argc, char* argv[]) {
	ConsoleManager manager;
	int jugadores;
	float energia;
	manager.mostrarMensaje("Ingrese la cantidad de jugadores");
	jugadores = manager.leerEntero();
	manager.mostrarMensaje("Ingrese la cantidad de energía");
	energia = manager.leerFlotante();
	manager.mostrarMensaje("Esperamos haya disfrutado perder su tiempo, le agradecemos interactuar con nosotros");
	manager.pausa();
	return 0;
}