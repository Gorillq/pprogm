#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Podaj liczbe: " << endl;
	cin >> x;
	if (x == 0)
		cout << "Podana liczba to zero";
	else if (x % 2 == 0)
		cout << "Liczba parzysta";
	else
		cout << "Liczba nieparzysta";
	return 0;
}
