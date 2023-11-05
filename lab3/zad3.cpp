#include <iostream>
#include <cmath>
using namespace std;

class Kwadrat {
public:
	int a, b, c;
	double b2, z, g, pierw;
	double p, r;
	void postacogolna() {
		cout << "ax^2 + bx + c";
		cout << endl;
	}
	void mojapostac() {
		cout << a << "x^2" << "+" << b << "x" << "+" << c;
		cout << endl;
	}
	void delta() {
		b2 = pow(b, 2);
		g = 4 * a * c;
		z = b2 - g;
		cout << z << endl;
		if (z > 0) {
			p = (-b - sqrt(z)) / (2 * a);
			r = (-b + sqrt(z)) / (2 * a);
			cout << r << endl << p;
		}
		else if (z == 0) {
			p = -b / (2 * a);
			cout << p;
		}
		else {
			cout << "Brak miejsc zerowych";
		}
	}
};
int main() {
	Kwadrat obiekt;
	obiekt.postacogolna();
	cout << "Podaj A" << endl;
	cin >> obiekt.a;
	cout << "Podaj B" << endl;
	cin >> obiekt.b;
	cout << "Podaj C" << endl;
	cin >> obiekt.c;
	if (obiekt.a == 0) {
		cout << "Liczba \"A\" nie moze byc 0";
		return 1;
	}
	obiekt.mojapostac();
	obiekt.delta();
	return 0;
}