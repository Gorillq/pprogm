#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cout << "Podaj liczbe i wcisnij enter (3)" << endl;
	double n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	cout <<  max({ n1, n2, n3 }) << " jest najwieksza";
	return 0;
}