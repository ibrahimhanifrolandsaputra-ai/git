#include <iostream>
#include <cmath>    
using namespace std;

int main() 
{
    int pilihan, mulai;

    do 
    {
        cout << "\n=== Program Menghitung Luas Permukaan & Volume Bangun Ruang ===\n";
        cout << "Masukkan 1 untuk mulai, 0 untuk berhenti: ";
        cin >> mulai;

        if (mulai == 0) 
        {
            cout << "Program berhenti.\n";
            break;
        }

        cout << "Pilih bangun ruang:\n";
        cout << "1. Kubus\n";
        cout << "2. Balok\n";
        cout << "3. Bola\n";
        cout << "4. Tabung\n";
        cout << "5. Kerucut\n";
        cout << "Pilihan (1-5): ";
        cin >> pilihan;

        switch (pilihan) 
        {
            case 1: 
            { 
                double sisi;
                cout << "Masukkan panjang sisi kubus: ";
                cin >> sisi;
                double luas = 6 * pow(sisi, 2);
                double volume = pow(sisi, 3);
                cout << "Luas permukaan kubus = " << luas << endl;
                cout << "Volume kubus = " << volume << endl;
                break;
            }
            case 2: 
            { 
                double p, l, t;
                cout << "Masukkan panjang balok: ";
                cin >> p;
                cout << "Masukkan lebar balok: ";
                cin >> l;
                cout << "Masukkan tinggi balok: ";
                cin >> t;
                double luas = 2 * (p*l + p*t + l*t);
                double volume = p * l * t;
                cout << "Luas permukaan balok = " << luas << endl;
                cout << "Volume balok = " << volume << endl;
                break;
            }
            case 3: 
            { 
                double r;
                cout << "Masukkan jari-jari bola: ";
                cin >> r;
                double luas = 4 * M_PI * pow(r, 2);
                double volume = (4.0/3.0) * M_PI * pow(r, 3);
                cout << "Luas permukaan bola = " << luas << endl;
                cout << "Volume bola = " << volume << endl;
                break;
            }
            case 4: 
            { 
                double r, t;
                cout << "Masukkan jari-jari tabung: ";
                cin >> r ;
                cout << "Masukkan tinggi tabung: ";
                cin >> t;
                double luas = 2 * M_PI * r * (r + t);
                double volume = M_PI * pow(r, 2) * t;
                cout << "Luas permukaan tabung = " << luas << endl;
                cout << "Volume tabung = " << volume << endl;
                break;
            }
            case 5: 
            { 
                double r, t;
                cout << "Masukkan jari-jari kerucut: ";
                cin >> r ;
                cout << "Masukkan tinggi kerucut: ";
                cin >> t;
                double s = sqrt(pow(r, 2) + pow(t, 2)); 
                double luas = M_PI * r * (r + s);
                double volume = (1.0/3.0) * M_PI * pow(r, 2) * t;
                cout << "Luas permukaan kerucut = " << luas << endl;
                cout << "Volume kerucut = " << volume << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } 
    while (mulai != 0);

    return 0;
}
