#include <iostream>
using namespace std;

int main() {
    const int n = 11;      // jumlah elemen deret
    int deret[n];          // deklarasi array 1 dimensi

    // Mengisi array dengan pola deret ganjil dimulai dari 3
    int nilai = 3;
    for (int i = 0; i < n; i++) {
        deret[i] = nilai;  // simpan nilai ke array
        nilai += 2;        // naik 2 setiap kali
    }

    // Menampilkan isi array
    cout << "Deret angka: ";
    for (int i = 0; i < n; i++) {
        cout << deret[i] << " ";
    }

    cout << endl;
    return 0;
}
