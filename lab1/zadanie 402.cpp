#include <iostream>
using namespace std;


int main()
{
    int a, b, c;
    cout << "Podaj liczbe (3): " << endl;
    cin >> a >> b >> c;
    
    int max = a;

    if (max < b)
        max = b;
    if (max < c)
        max = c;

    printf("%d jest najwieksza liczba ( %d, %d,  %d )", max,
        a, b, c);

    return 0;
}