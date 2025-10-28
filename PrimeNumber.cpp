#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas atas bilangan prima: ";
    cin >> n;

    int sum = 0;    
    int count = 0;  

    cout << "Deret bilangan prima sampai " << n << ":\n";

    for (int number = 2; number <= n; number++) 
    {
        bool bil_prima = true;  

        for (int i = 2; i < number; i++) 
        {
            if (number % i == 0) 
            {
                bil_prima = false; 
                break;         
            }
        }

        if (bil_prima) 
        {
            cout << number << " ";
            sum += number;
            count++;
        }
    }

    cout << "\nJumlah bilangan prima = " << sum << endl;
    cout << "Banyak bilangan prima = " << count << endl;

    return 0;
}
