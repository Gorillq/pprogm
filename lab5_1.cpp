#include <iostream>
#include <vector>


int main() {
	std::cout << "Program poda najwiekszy element wektora oraz index" << std::endl;
	std::cout << "Wartosci zatwierdzamy enter, liczby z przecinkiem odzielamy znakiem kropki np 5.5" << std::endl;
	std::cout << std::endl;
	std::vector<double> tablica;
	int wielkosc;
	double wartosc;
	std::cout << "podaj liczbe elementow tablicy" << std::endl;
	std::cin >> wielkosc;
	tablica.resize(wielkosc);
	for (int i = 0; i < wielkosc; i++) {
		int liczba = i + 1;
		std::cout << "Podaj wartosc " << liczba << " elementu" << std::endl;
		std::cin >> wartosc;
		tablica[i] = wartosc;
	}
	std::cout << "NAJWIEKSZY ELEMENT: " << *max_element(tablica.begin(), tablica.end()) << std::endl;
	for (int i = 0; i < tablica.size(); i++) {
		while (tablica[i] == *max_element(tablica.begin(), tablica.end())) {
			std::cout << "JEGO INDEX W MATEMATYCE(?) TO " << i + 1 << std::endl;
			std::cout << "JEGO INDEX W C++ TO " << i;
			break;
		}
		continue;
	}
	return 0;
}