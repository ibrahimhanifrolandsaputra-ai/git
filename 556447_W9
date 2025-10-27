#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double dist;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

double circumference(double r) {
    const double Pi = 3.1416;
    return 2 * Pi * r;
}

double area(double r) {
    const double Pi = 3.1416;
    return Pi * r * r;
}

int main() {
    double x1, y1, x2, y2, r;

    cout << "Masukkan pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    r = radius(x1, y1, x2, y2);
    cout << "Jari-jari: " << r << endl;
    cout << "Keliling: " << circumference(r) << endl;
    cout << "Luas: " << area(r) << endl;

    return 0;
}
