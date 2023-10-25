#include <iostream>
using namespace std;

class Rozgwiazda {
public:
	int a, b, i, j, k;
	void gwiazda() {
		cout << endl << "Wiersz o dlugosci a:" << endl;
		for (i = 0; i < a; i++) {
			cout << "*";
		}
		cout << endl;
	}
	void pogwiazda() {
		cout << "Kolumna o dlugosci b:" << endl;
		for (j = 0; j < b; j++) {
			cout << "*" << endl;
		}
	}
	void prostokat() {
		cout << "Prostokat o podstawie b i dlugosci a:";
		for (k = 1; k <= a; k++) {
			cout << endl;
			for (i = 1; i <= b; i++) {
				cout << "*";
			}
		}
		cout << endl;
	}
	void obwod() {
		cout << "Obramowanie prostokatu o podstawie b i dlugosci a:" << endl;
		for (i = 1; i <= a; i++) {
			for (j = 1; j <= b; j++) {
				if (i == 1 || i == a || j == 1 || j == b) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	void trojkat() {
		cout << "Trojkat prostokatny rownoramienny" << endl;
		for (i = 1; i <= a; i++) {
			if (i == 1) {
				cout << "*" << endl;
			}
			else {
				for (j = 1; j <= i; j++) {
					cout << "*";
				}
				cout << endl;
			}
		}
	}
	void odwrocony() {
		cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym" << endl;
		for (i = a; i > 0; i--) {
			for (j = 0; j < a - i; j++) {
				cout << " ";
			}
			for (k = 1; k <= i; k++){
				cout << "*";
			}
			cout << endl;
		}
	}
};

int main() {
	Rozgwiazda klasa;
	cout << "Podaj 2 liczby" << endl;
	cin >> klasa.a;
	cin >> klasa.b;
	cout << endl << "Liczby:" << endl << "a == " << klasa.a << endl << "b == " << klasa.b << endl;
	klasa.gwiazda();
	klasa.pogwiazda();
	klasa.prostokat();
	klasa.obwod();
	klasa.trojkat();
	klasa.odwrocony();
	return 0;
}