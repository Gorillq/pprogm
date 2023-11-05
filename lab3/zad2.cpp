#include <iostream>
using namespace std;


int main() {
	char a;
	for (;;) {
		cin >> a;
		if (a != 't') {
			cout << a;
			continue;
		}
		else {
			break;
			return 0;
		}
	}
}