#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void print(const vector<string>& lol) {
	copy(lol.begin(), lol.end(), ostream_iterator<string>(cout, ""));
}

int main() {
	string wejscie;
	char zdanie;
	vector<string> lol;
	cout << "Program przyjmuje input od uzytkownika i potwierdzamy enter, program bedzie zbieral input dopoki\n jakikolwiek jego element != t , wtedy program zakonczy dzialanie."; 
	cout << endl;
	cout << "Mozesz wpisac pierwszy prompt." << endl;
	while (true) {
		cin >> wejscie;
		char* macierz = &wejscie[0];
		auto mamyto = wejscie.find('t');
		if (mamyto < 18446744073709551615) {
			break;
		}
		else {
			lol.push_back(wejscie);
			print(lol);
		}
	}
	return 0;
}

