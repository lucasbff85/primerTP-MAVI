#include <iostream>
#include "Heroe.h"

using namespace std;









int main(int argc, const char* argv[]) {
	

	Heroe* Superman = new Heroe;

	Superman->rescatarPrincesa("Lucia");

	Superman->rescatarPrincesa("Blancanieves");

	Superman->recibirDanio(150);

	Superman->status();

}