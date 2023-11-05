#include <iostream>
#include <iomanip>
using namespace std;


class Calculator {
public:
	long float x, y, z;
	void dod() {
		z = x + y;
		cout << z;
	}
	void odejm() {
		z = x - y;
		cout << z;
	}
	void mnoz() {
		z = x * y;
		cout << z;
	}
	void dziel() {
		z = x / y;
		cout << z;
	}
};

int main() {
	int opcja;
	Calculator obiekt;
	cout << setprecision(2) << fixed;
	cout << "Podaj liczbe x" << endl;
	cin >> obiekt.x;
	cout << endl << "Podaj liczbe y" << endl;
	cin >> obiekt.y;
	cout << "Wybierz opcje" << endl <<"1.Dodawanie" << endl << "2.Odejmowanie" << endl << "3.Mnozenie" << endl << "4.Dzielenie" << endl;
	cin >> opcja;
	switch (opcja) {
	case 1:
		obiekt.dod();
		break;
	case 2:
		obiekt.odejm();
		break;
	case 3:
		obiekt.mnoz();
		break;
	case 4:
		obiekt.dziel();
		break;
	default:
		cout << "Opcja spoza zakresu, koniec programu";
		return 42;
	}
	return 0;
}