#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int a, b, hasil_penjumlahan, hasil_pengurangan, hasil_perkalian, hasil_pangkat, hasil_sisa_bagi;
    float hasil_pembagian, hasil_akar;

    cout<<"Masukkan nilai a dan b \n";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    
    hasil_penjumlahan = a+b;
    hasil_pengurangan = a-b;
    hasil_perkalian = a*b;
    hasil_pembagian = a/b;
    hasil_sisa_bagi = a%b;
    hasil_pangkat = pow(a,b);
    hasil_akar = pow(a, 1.0/b);

    cout<<"Hasil "<<a<<" ditambah "<<b<<" = "<<hasil_penjumlahan<<endl;
    cout<<"Hasil "<<a<<" dikurangi "<<b<<" = "<<hasil_pengurangan<<endl;
    cout<<"Hasil "<<a<<" dikali "<<b<<" = "<<hasil_perkalian<<endl;
    cout<<"Hasil "<<a<<" dibagi "<<b<<" = "<<hasil_pembagian<<endl;
    cout<<"Hasil "<<a<<" dibagi "<<b<<" sisa "<<hasil_sisa_bagi<<endl;
    cout<<"Hasil "<<a<<" dipangkat "<<b<<" = "<<hasil_pangkat<<endl;
    cout<<"Hasil "<<a<<" diakar "<<b<<" = "<<hasil_akar<<endl;

    return 0;

}