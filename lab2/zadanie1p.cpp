#include <iostream>
using namespace std;

int main() {
    int a, i, j;
    int sum = 0;

    cout << "Podaj wyraz zbioru " << endl;
    cin >> a;
    //petla zbioru
    for (i = 1; i <= a; i++) {
        int zbiory = 0;
        for (j = 1; j <= i; j++) {
            zbiory = zbiory + j;
        }
        sum = sum + zbiory;
        if (i == a) {
            cout << zbiory << " " << "=";
        }
        else {
            cout << zbiory << " " << "+" << " ";
        }
    }
    // suma zbioru
    cout << " " << sum;
    return 0;
}