#include <iostream>
#include <vector>
#include <algorithm>



int main() {
	std::vector<int> wektor;
	std::vector<int> sorter;
	std::vector<int> zapas;
	int wielkosc;
	std::cout << "Podaj wielkosc tablicy liczb calkowitych" << std::endl;
	std::cin >> wielkosc;
	wektor.resize(wielkosc);
	sorter.resize(wielkosc);
	for (int i = 0; i < wektor.size(); i++) {
		std::cout << "Wpisz element numer " << i + 1 << " i zatwierdz enter:" << std::endl;
		std::cin >> wektor[i];
	}
	while (wektor.size() % 2 > 0) {
		std::cout << "nie moge podzielic rowno wektora";
		return 1;
	}
	std::copy(wektor.begin(), wektor.end(), std::back_inserter(zapas));
	std::cout << "tablica wejsciowa:" << std::endl;
	for (int i = 0; i < wektor.size(); i++) {
		std::cout << wektor[i] << "\t";
		if ((i - 1) % 2 == 0 && i != 0) {
			std::cout << std::endl;
			continue;
		}
		else {
			continue;
		}
	}
	return 0;
}