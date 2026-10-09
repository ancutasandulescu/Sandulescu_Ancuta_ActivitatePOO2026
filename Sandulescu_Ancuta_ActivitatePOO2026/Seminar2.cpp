#include <iostream>

using namespace std;

struct Cladire
{
	char* culoare; 
	float inaltime;
	int nrEtaje;
	bool deschis;
};

Cladire citireCladire() {
	Cladire c;
	char x[100];
	cout << "Culoare: ";
	cin >> x;
	c.culoare = new char[strlen(x) + 1];
	strcpy_s(c.culoare, strlen(x) + 1, x); 

	cout << "\nInaltime: ";
	cin >> c.inaltime;
	cout << "\nNrEtaje: ";
	cin >> c.nrEtaje;
	cout << "\nDeschis (0/1): ";
	cin >> c.deschis;

	return c;
}

void afisareCladire(Cladire c) {

	cout << "Culoarea cladirii este: " << c.culoare;
	cout << "\nInaltimea cladirii este: " << c.inaltime;
	cout << "\nNr. etaje: " << c.nrEtaje;
	cout << "\nDeschis: " << c.deschis; 
}

void modificaNrEtaje(int noulNrEtaje, Cladire* c) { 
	(*c).nrEtaje = noulNrEtaje; 
}

void referinta(int noulNrEtaje, Cladire& c) {
	c.nrEtaje = noulNrEtaje;
}

int main() { 
	Cladire c = citireCladire();
	afisareCladire(c);
	cout << endl;
	modificaNrEtaje(20, &c);
	afisareCladire(c);
	referinta(21, c);
	return 0;
}