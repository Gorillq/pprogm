#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string student = "Kamil Kownacki";
    string number = "30272";
    string uczelnia = "PJATK wydział zamiejscowy w Gdańsku";
    cout << student << endl << number << endl << uczelnia;
    return 0;
}