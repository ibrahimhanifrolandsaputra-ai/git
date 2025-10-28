#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;

    cout << "Bilangan " << n << " adalah: " << endl;

    if (n % 3 == 0)
        cout << "- Kelipatan 3" << endl;
    else
        cout << "- Bukan kelipatan 3" << endl;

    if (n % 4 == 0)
        cout << "- Kelipatan 4" << endl;
    else
        cout << "- Bukan kelipatan 4" << endl;

    if (n % 5 == 0)
        cout << "- Kelipatan 5" << endl;
    else
        cout << "- Bukan kelipatan 5" << endl;

    if (n % 6 == 0)
        cout << "- Kelipatan 6" << endl;
    else
        cout << "- Bukan kelipatan 6" << endl;

    if (n % 7 == 0)
        cout << "- Kelipatan 7" << endl;
    else
        cout << "- Bukan kelipatan 7" << endl;

    if (n % 8 == 0)
        cout << "- Kelipatan 8" << endl;
    else
        cout << "- Bukan kelipatan 8" << endl;

    if (n % 9 == 0)
        cout << "- Kelipatan 9" << endl;
    else
        cout << "- Bukan kelipatan 9" << endl;

    return 0;
}