#include <iostream>
using namespace std;

int main ()
{
    int n;
    int sum, i;

    cout<<"Selamat datang di penjumlahan bilangan positif genap\n";
    cout<<"Masukkan batas atas n\n";
    cin>>n;

    cout<<"Value\t Sum\n";
    sum = 0;
    for(i=0; 2*i<=n; i++)
    {
        sum = sum+2*i;
        cout<<2*i<<"\t\t"<<sum<<"\n";
    }
    return 0;
}