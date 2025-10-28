#include <iostream>
#include <string>
using namespace std;

void cekBensin(string status) {
    if (status == "low") {
        cout << "Menepi sekarang dan cari pom bensin terdekat." << endl;
    } else if (status == "medium") {
        cout << "Cari pom bensin terdekat." << endl;
    } else if (status == "high") {
        cout << "Lanjut ke pemeriksaan aki..." << endl;
    } else {
        cout << "Input tidak dikenali!" << endl;
    }
}

void cekAki(string status) {
    if (status == "tidak") {
        cout << "Segera panggil bengkel servis!" << endl;
    } else if (status == "baik") {
        cout << "Lanjut ke pemeriksaan ban..." << endl;
    } else {
        cout << "Input tidak dikenali!" << endl;
    }
}

void cekBan(string status) {
    if (status == "bocor") {
        cout << "Segera menepi dan telepon bengkel tambal ban." << endl;
    } else if (status == "kempes") {
        cout << "Segera cari tambal ban terdekat." << endl;
    } else if (status == "aman") {
        cout << "Lanjutkan perjalanan, semoga selamat sampai tujuan!" << endl;
    } else {
        cout << "Input tidak dikenali!" << endl;
    }
}

int main() {
    string mogok;
    cout << "Apakah mobil mogok? (ya/tidak): ";
    cin >> mogok;

    if (mogok == "tidak") {
        cout << "Mobil baik-baik saja. Perjalanan dilanjutkan." << endl;
    } else if (mogok == "ya") {
        string bensin;
        cout << "Status bensin? (low/medium/high): ";
        cin >> bensin;
        cekBensin(bensin);

        if (bensin == "high") {
            string aki;
            cout << "Status aki? (baik/tidak): ";
            cin >> aki;
            cekAki(aki);

            if (aki == "baik") {
                string ban;
                cout << "Periksa kondisi ban? (bocor/kempes/aman): ";
                cin >> ban;
                cekBan(ban);
            }
        }
    } else {
        cout << "Input tidak dikenali!" << endl;
    }

    return 0;
}
