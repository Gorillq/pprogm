#include <iostream>
using namespace std;

//funkcja print z listy
void miesiac(int x) {
	string monat[12] = {"Styczen", "Luty", "Marzec", "Kwiecien", "Maj", "Czerwiec", "Lipiec", "Sierpien", "Wrzesien", "Pazdziernik", "Listopad", "Grudzien"};
	cout << monat[--x] << endl;
}

//funkcja miesiac = dni w roku nieprzestepnym
void dni(int x) {
	if (x == 1 && 3 && 5 && 7 && 8 && 10 && 12) {
		cout << "Liczba dni w roku nieprzestepnym: " << "31" << endl;
	}
	else if (x == 2) {
		cout << "Liczba dni w roku nieprzestepnym: " << "28" << endl;
	}
	else {
		cout << "Liczba dni w roku nieprzestepnym: " << "30" << endl;
	}
}

//funkcja pochmurnie albo inne
void pogoda(int x) {
	if (x < 4 || x > 9) {
		cout << "W tym miesiacu jest pochmurnie" << endl;
	}
	else {
		cout << "W tym miesiacu jest slonecznie" << endl;
	}
}

//switch
int main() {
	int k;
	cout << "Wpisz liczbe z przedzialu [1-12]" << endl;
	cin >> k;
	switch (k) {
	case 1:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 2:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 3:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 4:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 5:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 6:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 7:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 8:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 9:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 10:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 11:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	case 12:
		miesiac(k);
		dni(k);
		pogoda(k);
		break;
	default:
		cout << "Operacja niedozwolona, wartosc spoza zakresu" << endl;
		return 1;
	}
	return 0;
}