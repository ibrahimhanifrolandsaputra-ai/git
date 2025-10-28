#include <iostream>
using namespace std;

int main() {
    // 1. Mulai
    cout << "=== PROGRAM INVERTED SEQUENCE ===" << endl;

    // 2. Buat variabel
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int A[n];
    int B[n];
    int total = 0;

    cout << "Masukkan " << n << " elemen array (boleh negatif):" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> A[i];
    }

    // 3. Untuk setiap indeks i dari 0 sampai n-1, lakukan:
    for (int i = 0; i < n; i++) {

        // 4. Ambil elemen A[i] dan simpan ke variabel x
        int x = A[i];
        int hasil = 0;

        // 5. Jika i adalah indeks genap
        if (i % 2 == 0) {

            // a) Jika x = 0
            if (x == 0) {
                hasil = 0;
            }

            // b) Jika x < 0
            else if (x < 0) {
                int positif = -x;       // ubah ke positif dulu
                int balik = 0;
                while (positif > 0) {
                    int digit = positif % 10;
                    balik = balik * 10 + digit;
                    positif = positif / 10;
                }
                hasil = -balik;         // kembalikan tanda negatif
            }

            // c) Jika x > 0
            else {
                int balik = 0;
                while (x > 0) {
                    int digit = x % 10;
                    balik = balik * 10 + digit;
                    x = x / 10;
                }
                hasil = balik;
            }
        }

        // 6. Jika i adalah indeks ganjil
        else {
            hasil = x;  // tidak diubah
        }

        // 7. Simpan hasil transformasi ke array B
        B[i] = hasil;
    }

    // 8. Hitung jumlah semua elemen di dalam array B
    for (int i = 0; i < n; i++) {
        total = total + B[i];
    }

    // 9. Tampilkan isi array hasil transformasi dan nilai total
    cout << "\nArray awal: ";
    for (int i = 0; i < n; i++) cout << A[i] << " ";

    cout << "\nArray hasil transformasi: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";

    cout << "\nJumlah total elemen: " << total << endl;

    // 10. Selesai
    cout << "=== SELESAI ===" << endl;

    return 0;
}
