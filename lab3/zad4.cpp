#include <iostream>
using namespace std;

class Paskal {
public:
	int wartosc;
	void paskal(int x) {
		for (int i = 0; i <= x; i++) {
			for (int j = 0; j < x - i; j++) {
				cout << "  ";
			}
			wartosc = 1;
			for (int j = 1; j <= i; j++) {
				cout << wartosc << "   ";
				wartosc = wartosc * (i - j) / j;
			}
			cout << endl;
		}
	}
};
int main() {
	int g;
	Paskal obiekt;
	cout << "Liczba wierszy: " << endl;
	cin >> g;
	obiekt.paskal(g);
	return 0;
}