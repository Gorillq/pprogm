// zadanie2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
	int x;
	cout << "Podaj liczbe: ";
    cin >> x;
	if (x > 0) {
		cout << "Dodatnia";
	}
	else if (x < 0) {
		cout << "Ujemna";
	}
	else {
		cout << "Zero";
	}
	return 0;
}

