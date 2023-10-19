#include <iostream>

using namespace std;

int main() {
        int n1, n2, n3;
        cout << "Wprowadz 3 liczby" << endl;
        cin >> n1 >> n2 >> n3;
        string naj = "Najwieksza liczba: ";

        if (n1 >= n2) {
            // jesli a => od b to a i c
            if (n1 >= n3) {
                cout << naj << n1 << endl;
            }
            else {
                cout << naj << n3 << endl;
            }
        }
        else {
            // jezeli b to b i c
            if (n2 >= n3) {
                cout << naj << n2 << endl;
            }
            else {
                cout << naj << n3 << endl;
            }
        }
        return 0;
    }