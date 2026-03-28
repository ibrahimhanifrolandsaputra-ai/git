#include <iostream>
using namespace std;

int main() {
    double v0, g = 9.8;   
    double t = 0;         
    double h;             
    int iterasi = 0;      

    cout << "Masukkan kecepatan awal benda (m/s): ";
    cin >> v0;

    cout << "\nIterasi\tWaktu (s)\tPosisi (m)\n";
    cout << "---------------------------------\n";

    do {
        h = v0 * t - 0.5 * g * t * t;   
        if (h < 0) h = 0;               

        cout << iterasi << "\t" << t << "\t\t" << h << endl;

        t += 3;        
        iterasi++;     
    } while (h > 0);

    return 0;
}
