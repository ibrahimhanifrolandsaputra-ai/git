#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    cout << "Faktor prima dari " << n << " adalah: ";

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {   
            cout << i << " ";  
            n /= i;            
        }
    }

    cout << endl;
    return 0;
}